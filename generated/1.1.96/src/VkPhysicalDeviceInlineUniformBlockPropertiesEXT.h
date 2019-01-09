/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKPHYSICALDEVICEINLINEUNIFORMBLOCKPROPERTIESEXT_H__
#define __VK_VKPHYSICALDEVICEINLINEUNIFORMBLOCKPROPERTIESEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDeviceInlineUniformBlockPropertiesEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_GETTER(GetmaxInlineUniformBlockSize);
    static NAN_GETTER(GetmaxPerStageDescriptorInlineUniformBlocks);
    static NAN_GETTER(GetmaxPerStageDescriptorUpdateAfterBindInlineUniformBlocks);
    static NAN_GETTER(GetmaxDescriptorSetInlineUniformBlocks);
    static NAN_GETTER(GetmaxDescriptorSetUpdateAfterBindInlineUniformBlocks);

    // real instance
    VkPhysicalDeviceInlineUniformBlockPropertiesEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDeviceInlineUniformBlockPropertiesEXT();
    ~_VkPhysicalDeviceInlineUniformBlockPropertiesEXT();

};

#endif