/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKDISPLAYPLANECAPABILITIESKHR_H__
#define __VK_VKDISPLAYPLANECAPABILITIESKHR_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDisplayPlaneCapabilitiesKHR: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsupportedAlpha);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minSrcPosition;
      static NAN_GETTER(GetminSrcPosition);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxSrcPosition;
      static NAN_GETTER(GetmaxSrcPosition);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minSrcExtent;
      static NAN_GETTER(GetminSrcExtent);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxSrcExtent;
      static NAN_GETTER(GetmaxSrcExtent);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minDstPosition;
      static NAN_GETTER(GetminDstPosition);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxDstPosition;
      static NAN_GETTER(GetmaxDstPosition);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> minDstExtent;
      static NAN_GETTER(GetminDstExtent);
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> maxDstExtent;
      static NAN_GETTER(GetmaxDstExtent);

    // real instance
    VkDisplayPlaneCapabilitiesKHR instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDisplayPlaneCapabilitiesKHR();
    ~_VkDisplayPlaneCapabilitiesKHR();

};

#endif