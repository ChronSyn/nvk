/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceMemoryProperties2.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMemoryProperties2::constructor;

_VkPhysicalDeviceMemoryProperties2::_VkPhysicalDeviceMemoryProperties2() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MEMORY_PROPERTIES_2;
  
}

_VkPhysicalDeviceMemoryProperties2::~_VkPhysicalDeviceMemoryProperties2() {
  //printf("VkPhysicalDeviceMemoryProperties2 deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceMemoryProperties2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMemoryProperties2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMemoryProperties2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("memoryProperties").ToLocalChecked(), GetmemoryProperties, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceMemoryProperties2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceMemoryProperties2::flush() {
  _VkPhysicalDeviceMemoryProperties2 *self = this;
  if (!(self->memoryProperties.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->memoryProperties);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceMemoryProperties2::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMemoryProperties2* self = new _VkPhysicalDeviceMemoryProperties2();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMemoryProperties2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceMemoryProperties2::GetsType) {
  _VkPhysicalDeviceMemoryProperties2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// memoryProperties
NAN_GETTER(_VkPhysicalDeviceMemoryProperties2::GetmemoryProperties) {
  _VkPhysicalDeviceMemoryProperties2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMemoryProperties2>(info.This());
  if (self->memoryProperties.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->memoryProperties);
    info.GetReturnValue().Set(obj);
  }
}