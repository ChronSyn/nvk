/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKSHADINGRATEPALETTENV_H__
#define __VK_VKSHADINGRATEPALETTENV_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkShadingRatePaletteNV: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetshadingRatePaletteEntryCount);
    static NAN_SETTER(SetshadingRatePaletteEntryCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pShadingRatePaletteEntries;
    static NAN_GETTER(GetpShadingRatePaletteEntries);
    static NAN_SETTER(SetpShadingRatePaletteEntries);
    

    // real instance
    VkShadingRatePaletteNV instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkShadingRatePaletteNV();
    ~_VkShadingRatePaletteNV();

};

#endif