/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#ifndef __VK_VKOFFSET2D_H__
#define __VK_VKOFFSET2D_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkOffset2D: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(Getx);
    static NAN_SETTER(Setx);
    
    static NAN_GETTER(Gety);
    static NAN_SETTER(Sety);
    

    // real instance
    VkOffset2D instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkOffset2D();
    ~_VkOffset2D();

};

#endif