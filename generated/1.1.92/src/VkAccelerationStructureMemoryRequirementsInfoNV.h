/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKACCELERATIONSTRUCTUREMEMORYREQUIREMENTSINFONV_H__
#define __VK_VKACCELERATIONSTRUCTUREMEMORYREQUIREMENTSINFONV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkAccelerationStructureMemoryRequirementsInfoNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(Gettype);
    static NAN_SETTER(Settype);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> accelerationStructure;
      static NAN_GETTER(GetaccelerationStructure);
    static NAN_SETTER(SetaccelerationStructure);
    

    // real instance
    VkAccelerationStructureMemoryRequirementsInfoNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkAccelerationStructureMemoryRequirementsInfoNV();
    ~_VkAccelerationStructureMemoryRequirementsInfoNV();

};

#endif