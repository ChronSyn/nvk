/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKVIEWPORTWSCALINGNV_H__
#define __VK_VKVIEWPORTWSCALINGNV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkViewportWScalingNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getxcoeff);
    static NAN_SETTER(Setxcoeff);
    
    static NAN_GETTER(Getycoeff);
    static NAN_SETTER(Setycoeff);
    

    // real instance
    VkViewportWScalingNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkViewportWScalingNV();
    ~_VkViewportWScalingNV();

};

#endif