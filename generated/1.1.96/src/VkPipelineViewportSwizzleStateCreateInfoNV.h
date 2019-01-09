/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKPIPELINEVIEWPORTSWIZZLESTATECREATEINFONV_H__
#define __VK_VKPIPELINEVIEWPORTSWIZZLESTATECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineViewportSwizzleStateCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetviewportCount);
    static NAN_SETTER(SetviewportCount);
    
    std::vector<VkViewportSwizzleNV>* vpViewportSwizzles;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pViewportSwizzles;
    static NAN_GETTER(GetpViewportSwizzles);
    static NAN_SETTER(SetpViewportSwizzles);
    

    // real instance
    VkPipelineViewportSwizzleStateCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineViewportSwizzleStateCreateInfoNV();
    ~_VkPipelineViewportSwizzleStateCreateInfoNV();

};

#endif