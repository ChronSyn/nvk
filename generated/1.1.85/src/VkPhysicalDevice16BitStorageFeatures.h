/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKPHYSICALDEVICE16BITSTORAGEFEATURES_H__
#define __VK_VKPHYSICALDEVICE16BITSTORAGEFEATURES_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkPhysicalDevice16BitStorageFeatures: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetstorageBuffer16BitAccess);
    static NAN_SETTER(SetstorageBuffer16BitAccess);
    
    static NAN_GETTER(GetuniformAndStorageBuffer16BitAccess);
    static NAN_SETTER(SetuniformAndStorageBuffer16BitAccess);
    
    static NAN_GETTER(GetstoragePushConstant16);
    static NAN_SETTER(SetstoragePushConstant16);
    
    static NAN_GETTER(GetstorageInputOutput16);
    static NAN_SETTER(SetstorageInputOutput16);
    

    // real instance
    VkPhysicalDevice16BitStorageFeatures instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkPhysicalDevice16BitStorageFeatures();
    ~_VkPhysicalDevice16BitStorageFeatures();

};

#endif