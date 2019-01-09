/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKDESCRIPTORPOOLCREATEINFO_H__
#define __VK_VKDESCRIPTORPOOLCREATEINFO_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorPoolCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GetmaxSets);
    static NAN_SETTER(SetmaxSets);
    
    static NAN_GETTER(GetpoolSizeCount);
    static NAN_SETTER(SetpoolSizeCount);
    
    std::vector<VkDescriptorPoolSize>* vpPoolSizes;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pPoolSizes;
    static NAN_GETTER(GetpPoolSizes);
    static NAN_SETTER(SetpPoolSizes);
    

    // real instance
    VkDescriptorPoolCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDescriptorPoolCreateInfo();
    ~_VkDescriptorPoolCreateInfo();

};

#endif