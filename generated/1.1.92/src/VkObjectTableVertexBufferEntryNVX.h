/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKOBJECTTABLEVERTEXBUFFERENTRYNVX_H__
#define __VK_VKOBJECTTABLEVERTEXBUFFERENTRYNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkObjectTableVertexBufferEntryNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> buffer;
      static NAN_GETTER(Getbuffer);
    static NAN_SETTER(Setbuffer);
    

    // real instance
    VkObjectTableVertexBufferEntryNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkObjectTableVertexBufferEntryNVX();
    ~_VkObjectTableVertexBufferEntryNVX();

};

#endif