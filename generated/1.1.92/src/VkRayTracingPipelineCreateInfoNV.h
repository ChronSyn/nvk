/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKRAYTRACINGPIPELINECREATEINFONV_H__
#define __VK_VKRAYTRACINGPIPELINECREATEINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkRayTracingPipelineCreateInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetstageCount);
    static NAN_SETTER(SetstageCount);
    
    std::vector<VkPipelineShaderStageCreateInfo>* vpStages;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pStages;
    static NAN_GETTER(GetpStages);
    static NAN_SETTER(SetpStages);
    
    static NAN_GETTER(GetgroupCount);
    static NAN_SETTER(SetgroupCount);
    
    std::vector<VkRayTracingShaderGroupCreateInfoNV>* vpGroups;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pGroups;
    static NAN_GETTER(GetpGroups);
    static NAN_SETTER(SetpGroups);
    
    static NAN_GETTER(GetmaxRecursionDepth);
    static NAN_SETTER(SetmaxRecursionDepth);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> layout;
      static NAN_GETTER(Getlayout);
    static NAN_SETTER(Setlayout);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> basePipelineHandle;
      static NAN_GETTER(GetbasePipelineHandle);
    static NAN_SETTER(SetbasePipelineHandle);
    
    static NAN_GETTER(GetbasePipelineIndex);
    static NAN_SETTER(SetbasePipelineIndex);
    

    // real instance
    VkRayTracingPipelineCreateInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkRayTracingPipelineCreateInfoNV();
    ~_VkRayTracingPipelineCreateInfoNV();

};

#endif