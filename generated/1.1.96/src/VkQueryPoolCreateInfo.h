/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKQUERYPOOLCREATEINFO_H__
#define __VK_VKQUERYPOOLCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkQueryPoolCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetqueryType);
    static NAN_SETTER(SetqueryType);
    
    static NAN_GETTER(GetqueryCount);
    static NAN_SETTER(SetqueryCount);
    
    static NAN_GETTER(GetpipelineStatistics);
    static NAN_SETTER(SetpipelineStatistics);
    

    // real instance
    VkQueryPoolCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkQueryPoolCreateInfo();
    ~_VkQueryPoolCreateInfo();

};

#endif