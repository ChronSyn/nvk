/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#ifndef __VK_VKDEVICEQUEUEGLOBALPRIORITYCREATEINFOEXT_H__
#define __VK_VKDEVICEQUEUEGLOBALPRIORITYCREATEINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDeviceQueueGlobalPriorityCreateInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetglobalPriority);
    static NAN_SETTER(SetglobalPriority);
    

    // real instance
    VkDeviceQueueGlobalPriorityCreateInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkDeviceQueueGlobalPriorityCreateInfoEXT();
    ~_VkDeviceQueueGlobalPriorityCreateInfoEXT();

};

#endif