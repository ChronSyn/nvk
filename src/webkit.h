#ifndef __VK_WEBKIT_H__
#define __VK_WEBKIT_H__

#include <nan.h>

#include <GLEW/glew.h>

#define GLFW_EXPOSE_NATIVE_WGL
#define GLFW_EXPOSE_NATIVE_WIN32
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <GLFW/glfw3native.h>

#include <include/cef_app.h>
#include <include/cef_client.h>

#include "app.h";
#include "render_handler.h"
#include "browser_client.h"

extern "C" {
  __declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
  __declspec(dllexport) int AmdPowerXpressRequestHighPerformance = 1;
}

inline int POT(int x) {
  int p = 1;
  while (p < x) p *= 2;
  return p;
};

const std::string VERTEX = R"SHADER(
  #version 450 core
  layout(location = 0) in vec2 aVertices;
  out vec2 vTexCoords;
  void main(void) {
    gl_Position = vec4(aVertices, 0.0, 1.0);
    vTexCoords = (aVertices * 0.5 + 0.5);
  }
)SHADER";

const std::string FRAGMENT = R"SHADER(
  #version 450 core

  in vec2 vTexCoords;

  out vec4 fragColor;

  layout(location = 1) uniform sampler2D uSampler;

  void main(void) {
    vec2 texCoords = vTexCoords;
    fragColor = texture(uSampler, texCoords);
  }
)SHADER";

struct ShareHandles {
  HANDLE memory { INVALID_HANDLE_VALUE };
  HANDLE glReady { INVALID_HANDLE_VALUE };
  HANDLE glComplete { INVALID_HANDLE_VALUE };
};

// creates sharable memory on vulkan-side
struct SharedResources {
  struct {
    VkImage* image;
    VkExtent3D extent;
    VkImageView* view;
    VkSampler* sampler;
    VkFormat format { VK_FORMAT_UNDEFINED };
    VkDeviceMemory* memory;
    VkDeviceSize allocSize;
  } texture;
  struct {
    VkSemaphore glReady;
    VkSemaphore glComplete;
  } semaphores;
  ShareHandles handles;

  void createSemaphores(const VkDevice device, const VkInstance instance) {
    auto handleType = VK_EXTERNAL_SEMAPHORE_HANDLE_TYPE_OPAQUE_WIN32_BIT;
    PFN_vkGetSemaphoreWin32HandleKHR vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR) vkGetInstanceProcAddr(instance, "vkGetSemaphoreWin32HandleKHR");
    {
      VkSemaphoreCreateInfo sci = {};
      VkExportSemaphoreCreateInfo esci = {};
      esci.sType = VK_STRUCTURE_TYPE_EXPORT_SEMAPHORE_CREATE_INFO;
      esci.handleTypes = handleType;
      sci.sType = VK_STRUCTURE_TYPE_SEMAPHORE_CREATE_INFO;
      sci.pNext = &esci;

      vkCreateSemaphore(device, &sci, nullptr, &semaphores.glReady);
      vkCreateSemaphore(device, &sci, nullptr, &semaphores.glComplete);

      VkSemaphoreGetWin32HandleInfoKHR readySemaphoreInfo = {};
      readySemaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
      readySemaphoreInfo.semaphore = semaphores.glReady;
      readySemaphoreInfo.handleType = handleType;

      VkSemaphoreGetWin32HandleInfoKHR completeSemaphoreInfo = {};
      completeSemaphoreInfo.sType = VK_STRUCTURE_TYPE_SEMAPHORE_GET_WIN32_HANDLE_INFO_KHR;
      completeSemaphoreInfo.semaphore = semaphores.glComplete;
      completeSemaphoreInfo.handleType = handleType;

      vkGetSemaphoreWin32HandleKHR(device, &readySemaphoreInfo, &handles.glReady);
      vkGetSemaphoreWin32HandleKHR(device, &completeSemaphoreInfo, &handles.glComplete);
    }
  }

  void createTexture(const VkDevice device, const VkInstance instance, int width, int height) {
    PFN_vkGetMemoryWin32HandleKHR vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR) vkGetInstanceProcAddr(instance, "vkGetMemoryWin32HandleKHR");
    {
      VkImageCreateInfo imageCreateInfo = {};
      imageCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_CREATE_INFO;
      imageCreateInfo.imageType = VK_IMAGE_TYPE_2D;
      imageCreateInfo.extent.width = POT(width);
      imageCreateInfo.extent.height = POT(height);
      imageCreateInfo.extent.depth = 1;
      imageCreateInfo.mipLevels = 1;
      imageCreateInfo.arrayLayers = 1;
      imageCreateInfo.format = VK_FORMAT_R8G8B8A8_UNORM;
      imageCreateInfo.initialLayout = VK_IMAGE_LAYOUT_UNDEFINED;
      imageCreateInfo.usage = VK_IMAGE_USAGE_COLOR_ATTACHMENT_BIT | VK_IMAGE_USAGE_SAMPLED_BIT;
      imageCreateInfo.samples = VK_SAMPLE_COUNT_1_BIT;
      imageCreateInfo.tiling = VK_IMAGE_TILING_OPTIMAL;

      VkResult result = vkCreateImage(device, &imageCreateInfo, nullptr, texture.image);
      if (result != VK_SUCCESS) printf("Faild to create image!");
      texture.format = imageCreateInfo.format;
      texture.extent = imageCreateInfo.extent;
    }
    {
      VkMemoryRequirements memReqs;
      vkGetImageMemoryRequirements(device, *texture.image, &memReqs);
      VkExportMemoryAllocateInfo exportAllocInfo = {};
      exportAllocInfo.sType = VK_STRUCTURE_TYPE_EXPORT_MEMORY_ALLOCATE_INFO;
      exportAllocInfo.handleTypes = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT;
      VkMemoryAllocateInfo memAllocInfo = {};
      memAllocInfo.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
      memAllocInfo.pNext = &exportAllocInfo;
      memAllocInfo.allocationSize = texture.allocSize = memReqs.size;
      memAllocInfo.memoryTypeIndex = 7;
      vkAllocateMemory(device, &memAllocInfo, nullptr, texture.memory);
      vkBindImageMemory(device, *texture.image, *texture.memory, 0);

      VkMemoryGetWin32HandleInfoKHR memHandleInfo = {};
      memHandleInfo.sType = VK_STRUCTURE_TYPE_MEMORY_GET_WIN32_HANDLE_INFO_KHR;
      memHandleInfo.memory = *texture.memory;
      memHandleInfo.handleType = VK_EXTERNAL_MEMORY_HANDLE_TYPE_OPAQUE_WIN32_BIT;
      vkGetMemoryWin32HandleKHR(device, &memHandleInfo, &handles.memory);
    }
    {
      // Create sampler
      VkSamplerCreateInfo samplerCreateInfo = {};
      samplerCreateInfo.sType = VK_STRUCTURE_TYPE_SAMPLER_CREATE_INFO;
      samplerCreateInfo.magFilter = VK_FILTER_LINEAR;
      samplerCreateInfo.minFilter = VK_FILTER_LINEAR;
      samplerCreateInfo.mipmapMode = VK_SAMPLER_MIPMAP_MODE_LINEAR;
      // Max level-of-detail should match mip level count
      samplerCreateInfo.maxLod = (float)1;
      // Only enable anisotropic filtering if enabled on the devicec
      samplerCreateInfo.maxAnisotropy = 16.0f;
      samplerCreateInfo.anisotropyEnable = true;
      samplerCreateInfo.borderColor = VK_BORDER_COLOR_FLOAT_OPAQUE_WHITE;
      vkCreateSampler(device, &samplerCreateInfo, nullptr, texture.sampler);
    }
    {
      // Create image view
      VkImageViewCreateInfo viewCreateInfo = {};
      viewCreateInfo.sType = VK_STRUCTURE_TYPE_IMAGE_VIEW_CREATE_INFO;
      viewCreateInfo.viewType = VK_IMAGE_VIEW_TYPE_2D;
      viewCreateInfo.image = *texture.image;
      viewCreateInfo.format = texture.format;
      viewCreateInfo.subresourceRange = { VK_IMAGE_ASPECT_COLOR_BIT, 0, 1, 0, 1 };
      VkResult result = vkCreateImageView(device, &viewCreateInfo, nullptr, texture.view);
      if (result != VK_SUCCESS) printf("Failed to create image view!\n");
    }
  }

  void destroy() {}

} shared;

class VulkanWebKit: public Nan::ObjectWrap {

  public:

    static NAN_METHOD(New);

    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> windowVK;

    // linked semaphores
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> readyVK;
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> completeVK;

    // linked queue, device, instance
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> deviceVK;
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> instanceVK;

    // js visisble texture
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> texture;

    GLFWwindow* windowGL;

    GLuint glReady { 0 };
    GLuint glComplete { 0 };
    GLuint tex = 0;
    GLuint fbo = 0;
    GLuint vao = 0;
    GLuint program = 0;
    GLuint mem = 0;

    SharedResources shared;

    CefRefPtr<VkCEFApp> app;
    CefRefPtr<CefBrowser> browser;
    CefRefPtr<BrowserClient> client;

    RenderHandler* renderHandler;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

    static NAN_GETTER(Gettexture);
    static NAN_SETTER(Settexture);

    static NAN_METHOD(draw);
    static NAN_METHOD(init);
    static NAN_METHOD(resize);
    static NAN_METHOD(mouseup);
    static NAN_METHOD(mousedown);
    static NAN_METHOD(mousemove);
    static NAN_METHOD(linkSemaphores);
    static NAN_METHOD(loadURL);

    void initCEF();
    void initOpenGL();
    void resizeCEF(int, int);
    void renderOpenGL();

    void createSharedSemaphores();
    void createSharedMemory(int, int, int);
    void createTextureObject(int, int);
    void mouseClick(int, int, int, bool);
    GLuint createShader(const std::string, const std::string);

  private:
    VulkanWebKit();
    ~VulkanWebKit();

};

Nan::Persistent<v8::FunctionTemplate> VulkanWebKit::constructor;

VulkanWebKit::VulkanWebKit() {}
VulkanWebKit::~VulkanWebKit() {}

void VulkanWebKit::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(VulkanWebKit::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VulkanWebKit").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  SetPrototypeAccessor(proto, Nan::New("texture").ToLocalChecked(), Gettexture, Settexture, ctor);

  Nan::SetPrototypeMethod(ctor, "draw", draw);
  Nan::SetPrototypeMethod(ctor, "init", init);
  Nan::SetPrototypeMethod(ctor, "resize", resize);
  Nan::SetPrototypeMethod(ctor, "mouseup", mouseup);
  Nan::SetPrototypeMethod(ctor, "mousedown", mousedown);
  Nan::SetPrototypeMethod(ctor, "mousemove", mousemove);
  Nan::SetPrototypeMethod(ctor, "loadURL", loadURL);
  Nan::SetPrototypeMethod(ctor, "linkSemaphores", linkSemaphores);

  Nan::Set(target, Nan::New("VulkanWebKit").ToLocalChecked(), ctor->GetFunction());
}

void VulkanWebKit::initCEF() {
  VulkanWindow* windowVK = Nan::ObjectWrap::Unwrap<VulkanWindow>(Nan::New(this->windowVK));
  CefEnableHighDPISupport();

  CefMainArgs args;
  args.instance = GetModuleHandle(nullptr);

  std::string subpath = dirname + "/CEF_subprocess.exe";
  char* path = new char[subpath.size() + 1];
  copy(subpath.begin(), subpath.end(), path);
  path[subpath.size()] = '\0'; 

  app = new VkCEFApp();
  app->SetSubprocess(path);

  CefSettings settings;
  settings.no_sandbox = true;
  //settings.pack_loading_disabled = false;
  settings.multi_threaded_message_loop = false;
  settings.windowless_rendering_enabled = true;  
  settings.log_severity = LOGSEVERITY_DISABLE;
  CefString(&settings.browser_subprocess_path) = path;

  CefInitialize(args, settings, app.get(), nullptr);

  CefWindowInfo windowInfo;
  //windowInfo.shared_texture_enabled = true;
  //windowInfo.external_begin_frame_enabled = true;
  windowInfo.windowless_rendering_enabled = true;
  windowInfo.SetAsWindowless(GetConsoleWindow());
  //windowInfo.SetAsWindowless(nullptr);
  //windowInfo.shared_texture_enabled = true;
  //windowInfo.external_begin_frame_enabled = true;

  CefBrowserSettings browserSettings;
  browserSettings.webgl = STATE_DISABLED;
  browserSettings.web_security = STATE_DISABLED;
  //browserSettings.windowless_frame_rate = 30;

  renderHandler = new RenderHandler();
  renderHandler->window = windowVK->instance;

  client = new BrowserClient(renderHandler);
  browser = CefBrowserHost::CreateBrowserSync(windowInfo, client.get(), "", browserSettings, nullptr);

  if (!renderHandler->initialized) renderHandler->init(POT(windowVK->width), POT(windowVK->height));

  this->resizeCEF(windowVK->width, windowVK->height);
  browser->GetMainFrame()->LoadURL(dirname + "/initial.html");

  delete path;
}

void VulkanWebKit::resizeCEF(int width, int height) {
  VulkanWindow* windowVK = Nan::ObjectWrap::Unwrap<VulkanWindow>(Nan::New(this->windowVK));
  this->renderHandler->reshape(width, height);
  this->browser->GetHost()->WasResized();
  this->browser->GetHost()->SetFocus(true);
  this->browser->GetHost()->SendFocusEvent(true);
}

void VulkanWebKit::renderOpenGL() {
  VulkanWindow* windowVK = Nan::ObjectWrap::Unwrap<VulkanWindow>(Nan::New(this->windowVK));
  //browser->GetHost()->SendExternalBeginFrame();

  renderHandler->draw();

  GLenum srcLayout = GL_LAYOUT_COLOR_ATTACHMENT_EXT;
  glWaitSemaphoreEXT(this->glReady, 0, nullptr, 1, &this->tex, &srcLayout);

  glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
  glClear(GL_COLOR_BUFFER_BIT);
  glViewport(0, 0, windowVK->width, windowVK->height);
  glUseProgram(this->program);
  //glProgramUniform2f(this->program, 0, x, y);
  glBindVertexArray(this->vao);
  glActiveTexture(GL_TEXTURE0);
  glBindTexture(GL_TEXTURE_2D, renderHandler->tex_);
  glDrawArrays(GL_TRIANGLE_STRIP, 0, 4);

  glfwSwapBuffers(this->windowGL);

  GLenum dstLayout = GL_LAYOUT_SHADER_READ_ONLY_EXT;
  glSignalSemaphoreEXT(this->glComplete, 0, nullptr, 1, &this->tex, &dstLayout);
  glFlush();

  CefDoMessageLoopWork();
};

void VulkanWebKit::createTextureObject(int width, int height) {
  // init
  if (this->texture.IsEmpty()) {
    v8::Local<v8::Object> texture = Nan::New<v8::Object>();
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> persTexture(texture);
    this->texture = persTexture;
  }
  v8::Local<v8::Object> texture = Nan::New(this->texture);
  v8::Local<v8::Function> ctorImage = Nan::GetFunction(Nan::New(_VkImage::constructor)).ToLocalChecked();
  v8::Local<v8::Function> ctorMemory = Nan::GetFunction(Nan::New(_VkDeviceMemory::constructor)).ToLocalChecked();
  v8::Local<v8::Function> ctorSampler = Nan::GetFunction(Nan::New(_VkSampler::constructor)).ToLocalChecked();
  v8::Local<v8::Function> ctorView = Nan::GetFunction(Nan::New(_VkImageView::constructor)).ToLocalChecked();
  v8::Local<v8::Object> image = Nan::NewInstance(ctorImage, static_cast<const int>(0), nullptr).ToLocalChecked();
  v8::Local<v8::Object> memory = Nan::NewInstance(ctorMemory, static_cast<const int>(0), nullptr).ToLocalChecked();
  v8::Local<v8::Object> sampler = Nan::NewInstance(ctorSampler, static_cast<const int>(0), nullptr).ToLocalChecked();
  v8::Local<v8::Object> view = Nan::NewInstance(ctorView, static_cast<const int>(0), nullptr).ToLocalChecked();
  // apply to texture
  {
    texture->Set(Nan::New("image").ToLocalChecked(), image);
    texture->Set(Nan::New("memory").ToLocalChecked(), memory);
    texture->Set(Nan::New("sampler").ToLocalChecked(), sampler);
    texture->Set(Nan::New("view").ToLocalChecked(), view);
    texture->Set(Nan::New("actualWidth").ToLocalChecked(), Nan::New(POT(width)));
    texture->Set(Nan::New("actualHeight").ToLocalChecked(), Nan::New(POT(height)));
  }
  // apply to shared
  {
    this->shared.texture.image = &Nan::ObjectWrap::Unwrap<_VkImage>(image)->instance;
    this->shared.texture.memory = &Nan::ObjectWrap::Unwrap<_VkDeviceMemory>(memory)->instance;
    this->shared.texture.sampler = &Nan::ObjectWrap::Unwrap<_VkSampler>(sampler)->instance;
    this->shared.texture.view = &Nan::ObjectWrap::Unwrap<_VkImageView>(view)->instance;
  }
}

void VulkanWebKit::initOpenGL() {
  VulkanWindow* windowVK = Nan::ObjectWrap::Unwrap<VulkanWindow>(Nan::New(this->windowVK));
  printf("Initialising GLFW OpenGL..\n");
  glfwWindowHint(GLFW_CLIENT_API, GLFW_OPENGL_API);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
  glfwWindowHint(GLFW_VISIBLE, GL_FALSE);
  glfwSwapInterval(0);
  GLFWwindow* window = glfwCreateWindow(2, 2, "opengl", nullptr, nullptr);
  //glfwHideWindow(window);
  this->windowGL = window;
  glfwMakeContextCurrent(window);
  // init glew
  if (glewInit() != GLEW_OK) return Nan::ThrowError("Failed to init GLEW!");

  glDisable(GL_DEPTH_TEST);
  glEnable(GL_TEXTURE_2D);

  // gl program
  GLuint program = this->createShader(VERTEX, FRAGMENT);

  float vertices[] = {
    -1, +1,
    -1, -1,
    +1, +1,
    +1, -1
  };

  GLuint vao;
  GLuint vertexBuffer;

  glGenBuffers(1, &vertexBuffer);
  glGenVertexArrays(1, &vao);

  //setup the buffers
  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glBufferData(GL_ARRAY_BUFFER, sizeof(vertices) * sizeof(float), vertices, GL_STATIC_DRAW);
  glBindBuffer(GL_ARRAY_BUFFER, 0);

  GLuint vertexLoc = glGetAttribLocation(program, "aVertices");
  GLuint samplerLoc = glGetUniformLocation(program, "uSampler");

  //Setup the VAO
  glBindVertexArray(vao);

  glBindBuffer(GL_ARRAY_BUFFER, vertexBuffer);
  glVertexAttribPointer(vertexLoc, 2, GL_FLOAT, GL_FALSE, 0, 0);
  glEnableVertexAttribArray(vertexLoc);

  glBindVertexArray(0);

  this->vao = vao;
  this->program = program;

  this->createSharedSemaphores();
  this->createSharedMemory(windowVK->width, windowVK->height, this->shared.texture.allocSize);
}

void VulkanWebKit::createSharedSemaphores() {
  glGenSemaphoresEXT(1, &this->glReady);
  glGenSemaphoresEXT(1, &this->glComplete);
  glImportSemaphoreWin32HandleEXT(this->glReady, GL_HANDLE_TYPE_OPAQUE_WIN32_EXT, this->shared.handles.glReady);
  glImportSemaphoreWin32HandleEXT(this->glComplete, GL_HANDLE_TYPE_OPAQUE_WIN32_EXT, this->shared.handles.glComplete);
}

void VulkanWebKit::createSharedMemory(int width, int height, int byteLength) {
  glCreateTextures(GL_TEXTURE_2D, 1, &this->tex);
  glCreateMemoryObjectsEXT(1, &this->mem);
  glImportMemoryWin32HandleEXT(this->mem, byteLength, GL_HANDLE_TYPE_OPAQUE_WIN32_EXT, this->shared.handles.memory);
  glTextureStorageMem2DEXT(this->tex, 1, GL_RGBA8, POT(width), POT(height), this->mem, 0);
  glCreateFramebuffers(1, &this->fbo);
  glNamedFramebufferTexture(this->fbo, GL_COLOR_ATTACHMENT0, this->tex, 0);
  glBindFramebuffer(GL_DRAW_FRAMEBUFFER, this->fbo);
}

void VulkanWebKit::mouseClick(int x, int y, int button, bool mouseup) {
  CefMouseEvent evt;
  CefBrowserHost::MouseButtonType evtBtn;
  evt.x = x;
  evt.y = y;
  switch (button) {
    case GLFW_MOUSE_BUTTON_LEFT: evtBtn = MBT_LEFT; break;
    case GLFW_MOUSE_BUTTON_RIGHT: evtBtn = MBT_RIGHT; break;
    case GLFW_MOUSE_BUTTON_MIDDLE: evtBtn = MBT_MIDDLE; break;
    default: Nan::ThrowError("Unsupported mouse button!");
  };
  if (this->browser && this->browser->GetHost()) {
    this->browser->GetHost()->SendMouseClickEvent(evt, evtBtn, mouseup, 1);
  }
}

GLuint VulkanWebKit::createShader(const std::string vert, const std::string frag) {
  int len;
  GLint status;

  GLuint vs = glCreateShader(GL_VERTEX_SHADER);
  GLuint fs = glCreateShader(GL_FRAGMENT_SHADER);
  GLuint prog = glCreateProgram();

  const char *vertSrc = vert.c_str();
  const char *fragSrc = frag.c_str();

  len = vert.length();
  glShaderSource(vs, 1, &vertSrc, &len);
  glCompileShader(vs);
  glGetShaderiv(vs, GL_COMPILE_STATUS, &status);
  if (status != GL_TRUE) Nan::ThrowError("Invalid GL Vertex shader!");

  len = frag.length();
  glShaderSource(fs, 1, &fragSrc, &len);
  glCompileShader(fs);
  glGetShaderiv(fs, GL_COMPILE_STATUS, &status);
  if (status != GL_TRUE) Nan::ThrowError("Invalid GL Fragment shader!");

  glAttachShader(prog, vs);
  glAttachShader(prog, fs);
  glLinkProgram(prog);

  glValidateProgram(prog);
  glGetProgramiv(prog, GL_LINK_STATUS, &status);
  if (status != GL_TRUE) Nan::ThrowError("Invalid GL Program!");

  return prog;
}

NAN_METHOD(VulkanWebKit::New) {
  VulkanWebKit* self = new VulkanWebKit();
  self->Wrap(info.Holder());
  // create glfw window
  if (info.IsConstructCall()) {
    // init glfw
    if (glfwInit() != GLFW_TRUE) return Nan::ThrowError("Failed to init GLFW!");
    // process arguments
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = info[0]->ToObject();
      v8::Local<v8::Value> argWindow = obj->Get(Nan::New("window").ToLocalChecked());
      if (!(argWindow->IsUndefined())) {
        Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objWindow(argWindow->ToObject());
        self->windowVK = objWindow;
      }
    }
  }
  info.GetReturnValue().Set(info.Holder());
}

NAN_METHOD(VulkanWebKit::loadURL) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  std::string url = *v8::String::Utf8Value(v8::Isolate::GetCurrent(), info[0]->ToString());
  self->browser->GetMainFrame()->LoadURL(url.c_str());
}

NAN_METHOD(VulkanWebKit::resize) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  VkDevice device = Nan::ObjectWrap::Unwrap<_VkDevice>(Nan::New(self->deviceVK))->instance;
  VkInstance instance = Nan::ObjectWrap::Unwrap<_VkInstance>(Nan::New(self->instanceVK))->instance;
  v8::Local<v8::Object> texture = Nan::New(self->texture);
  int width = info[0]->Uint32Value();
  int height = info[1]->Uint32Value();
  int actualWidth = POT(width);
  int actualHeight = POT(height);
  texture->Set(Nan::New("actualWidth").ToLocalChecked(), Nan::New(actualWidth));
  texture->Set(Nan::New("actualHeight").ToLocalChecked(), Nan::New(actualHeight));
  self->createTextureObject(width, height);
  self->shared.createTexture(device, instance, width, height);
  self->createSharedMemory(width, height, self->shared.texture.allocSize);
  self->resizeCEF(width, height);
}

NAN_METHOD(VulkanWebKit::init) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  VulkanWindow* windowVK = Nan::ObjectWrap::Unwrap<VulkanWindow>(Nan::New(self->windowVK));
  if (info[0]->IsObject()) {
    v8::Local<v8::Object> obj = info[0]->ToObject();
    // .device
    {
      v8::Local<v8::Object> argDevice = obj->Get(Nan::New("device").ToLocalChecked())->ToObject();
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objDevice(argDevice);
      self->deviceVK = objDevice;
    }
    // .instance
    {
      v8::Local<v8::Object> argInstance = obj->Get(Nan::New("instance").ToLocalChecked())->ToObject();
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objInstance(argInstance);
      self->instanceVK = objInstance;
    }
    VkDevice device = Nan::ObjectWrap::Unwrap<_VkDevice>(Nan::New(self->deviceVK))->instance;
    VkInstance instance = Nan::ObjectWrap::Unwrap<_VkInstance>(Nan::New(self->instanceVK))->instance;
    self->createTextureObject(windowVK->width, windowVK->height);
    self->shared.createSemaphores(device, instance);
    self->shared.createTexture(device, instance, windowVK->width, windowVK->height);
    self->initOpenGL();
    self->initCEF();
  } else {
    Nan::ThrowError("Argument 1 of 'init' has to be an Object");
  }
  //info.GetReturnValue().Set(Nan::New(static_cast<int32_t>(out)));
}

NAN_METHOD(VulkanWebKit::linkSemaphores) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  if (info[0]->IsObject()) {
    v8::Local<v8::Object> obj = info[0]->ToObject();
    v8::Local<v8::Object> argReady = obj->Get(Nan::New("ready").ToLocalChecked())->ToObject();
    v8::Local<v8::Object> argComplete = obj->Get(Nan::New("complete").ToLocalChecked())->ToObject();
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objReady(argReady);
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> objComplete(argComplete);
    self->readyVK = objReady;
    self->completeVK = objComplete;
    VkSemaphore* ready = &Nan::ObjectWrap::Unwrap<_VkSemaphore>(argReady)->instance;
    VkSemaphore* complete = &Nan::ObjectWrap::Unwrap<_VkSemaphore>(argComplete)->instance;
  } else {
    Nan::ThrowError("Argument 1 of 'linkSemaphores' has to be an Object");
  }
}

NAN_METHOD(VulkanWebKit::draw) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  self->renderOpenGL();
}

// texture
NAN_GETTER(VulkanWebKit::Gettexture) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  info.GetReturnValue().Set(Nan::New(self->texture));
}
NAN_SETTER(VulkanWebKit::Settexture) {
  Nan::ThrowError("Cannot change immutable member 'texture'!");
}

// events
NAN_METHOD(VulkanWebKit::mouseup) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  int x = info[0]->Uint32Value();
  int y = info[1]->Uint32Value();
  int button = info[2]->Uint32Value();
  self->mouseClick(x, y, button, true);
}
NAN_METHOD(VulkanWebKit::mousedown) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  int x = info[0]->Uint32Value();
  int y = info[1]->Uint32Value();
  int button = info[2]->Uint32Value();
  self->mouseClick(x, y, button, false);
}
NAN_METHOD(VulkanWebKit::mousemove) {
  VulkanWebKit *self = Nan::ObjectWrap::Unwrap<VulkanWebKit>(info.This());
  int x = info[0]->Uint32Value();
  int y = info[1]->Uint32Value();
  {
    CefMouseEvent evt;
    evt.x = x;
    evt.y = y;
    evt.modifiers = EVENTFLAG_NONE;
    if (self->browser && self->browser->GetHost()) {
      self->browser->GetHost()->SendMouseMoveEvent(evt, false);
    }
  }
}

#endif
