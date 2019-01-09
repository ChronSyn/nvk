/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#ifndef __VK_VKSPARSEIMAGEMEMORYBIND_H__
#define __VK_VKSPARSEIMAGEMEMORYBIND_H__

#include <nan.h>

#include <vulkan/vulkan_win32.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkSparseImageMemoryBind: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> subresource;
      static NAN_GETTER(Getsubresource);
    static NAN_SETTER(Setsubresource);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> offset;
      static NAN_GETTER(Getoffset);
    static NAN_SETTER(Setoffset);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> extent;
      static NAN_GETTER(Getextent);
    static NAN_SETTER(Setextent);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> memory;
      static NAN_GETTER(Getmemory);
    static NAN_SETTER(Setmemory);
    
    static NAN_GETTER(GetmemoryOffset);
    static NAN_SETTER(SetmemoryOffset);
    
    static NAN_GETTER(Getflags);
    static NAN_SETTER(Setflags);
    

    // real instance
    VkSparseImageMemoryBind instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);
    bool flush(void);

  private:

    _VkSparseImageMemoryBind();
    ~_VkSparseImageMemoryBind();

};

#endif