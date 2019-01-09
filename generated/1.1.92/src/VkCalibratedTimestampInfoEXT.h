/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKCALIBRATEDTIMESTAMPINFOEXT_H__
#define __VK_VKCALIBRATEDTIMESTAMPINFOEXT_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkCalibratedTimestampInfoEXT: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GettimeDomain);
    static NAN_SETTER(SettimeDomain);
    

    // real instance
    VkCalibratedTimestampInfoEXT instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkCalibratedTimestampInfoEXT();
    ~_VkCalibratedTimestampInfoEXT();

};

#endif