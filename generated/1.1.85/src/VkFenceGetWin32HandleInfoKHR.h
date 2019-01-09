/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKFENCEGETWIN32HANDLEINFOKHR_H__
#define __VK_VKFENCEGETWIN32HANDLEINFOKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkFenceGetWin32HandleInfoKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> fence;
      static NAN_GETTER(Getfence);
    static NAN_SETTER(Setfence);
    
    static NAN_GETTER(GethandleType);
    static NAN_SETTER(SethandleType);
    

    // real instance
    VkFenceGetWin32HandleInfoKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkFenceGetWin32HandleInfoKHR();
    ~_VkFenceGetWin32HandleInfoKHR();

};

#endif