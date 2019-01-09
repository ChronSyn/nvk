/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKPIPELINERASTERIZATIONSTATECREATEINFO_H__
#define __VK_VKPIPELINERASTERIZATIONSTATECREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPipelineRasterizationStateCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetdepthClampEnable);
    static NAN_SETTER(SetdepthClampEnable);
    
    static NAN_GETTER(GetrasterizerDiscardEnable);
    static NAN_SETTER(SetrasterizerDiscardEnable);
    
    static NAN_GETTER(GetpolygonMode);
    static NAN_SETTER(SetpolygonMode);
    
    static NAN_GETTER(GetcullMode);
    static NAN_SETTER(SetcullMode);
    
    static NAN_GETTER(GetfrontFace);
    static NAN_SETTER(SetfrontFace);
    
    static NAN_GETTER(GetdepthBiasEnable);
    static NAN_SETTER(SetdepthBiasEnable);
    
    static NAN_GETTER(GetdepthBiasConstantFactor);
    static NAN_SETTER(SetdepthBiasConstantFactor);
    
    static NAN_GETTER(GetdepthBiasClamp);
    static NAN_SETTER(SetdepthBiasClamp);
    
    static NAN_GETTER(GetdepthBiasSlopeFactor);
    static NAN_SETTER(SetdepthBiasSlopeFactor);
    
    static NAN_GETTER(GetlineWidth);
    static NAN_SETTER(SetlineWidth);
    

    // real instance
    VkPipelineRasterizationStateCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPipelineRasterizationStateCreateInfo();
    ~_VkPipelineRasterizationStateCreateInfo();

};

#endif