/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKDISPLAYPLANECAPABILITIES2KHR_H__
#define __VK_VKDISPLAYPLANECAPABILITIES2KHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayPlaneCapabilities2KHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> capabilities;
      static NAN_GETTER(Getcapabilities);

    // real instance
    VkDisplayPlaneCapabilities2KHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplayPlaneCapabilities2KHR();
    ~_VkDisplayPlaneCapabilities2KHR();

};

#endif