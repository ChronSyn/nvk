/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKGEOMETRYNVX_H__
#define __VK_VKGEOMETRYNVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkGeometryNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetgeometryType);
    static NAN_SETTER(SetgeometryType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> geometry;
      static NAN_GETTER(Getgeometry);
    static NAN_SETTER(Setgeometry);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    

    // real instance
    VkGeometryNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkGeometryNVX();
    ~_VkGeometryNVX();

};

#endif