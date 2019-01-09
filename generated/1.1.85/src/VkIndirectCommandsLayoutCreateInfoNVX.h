/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKINDIRECTCOMMANDSLAYOUTCREATEINFONVX_H__
#define __VK_VKINDIRECTCOMMANDSLAYOUTCREATEINFONVX_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkIndirectCommandsLayoutCreateInfoNVX: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
    static NAN_GETTER(GetpipelineBindPoint);
    static NAN_SETTER(SetpipelineBindPoint);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    
    static NAN_GETTER(GettokenCount);
    static NAN_SETTER(SettokenCount);
    
    std::vector<VkIndirectCommandsLayoutTokenNVX>* vpTokens;
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> pTokens;
    static NAN_GETTER(GetpTokens);
    static NAN_SETTER(SetpTokens);
    

    // real instance
    VkIndirectCommandsLayoutCreateInfoNVX instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkIndirectCommandsLayoutCreateInfoNVX();
    ~_VkIndirectCommandsLayoutCreateInfoNVX();

};

#endif