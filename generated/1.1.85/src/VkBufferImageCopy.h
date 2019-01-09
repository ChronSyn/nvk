/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKBUFFERIMAGECOPY_H__
#define __VK_VKBUFFERIMAGECOPY_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkBufferImageCopy: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetbufferOffset);
    static NAN_SETTER(SetbufferOffset);
    
    static NAN_GETTER(GetbufferRowLength);
    static NAN_SETTER(SetbufferRowLength);
    
    static NAN_GETTER(GetbufferImageHeight);
    static NAN_SETTER(SetbufferImageHeight);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageSubresource;
      static NAN_GETTER(GetimageSubresource);
    static NAN_SETTER(SetimageSubresource);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageOffset;
      static NAN_GETTER(GetimageOffset);
    static NAN_SETTER(SetimageOffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> imageExtent;
      static NAN_GETTER(GetimageExtent);
    static NAN_SETTER(SetimageExtent);
    

    // real instance
    VkBufferImageCopy instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkBufferImageCopy();
    ~_VkBufferImageCopy();

};

#endif