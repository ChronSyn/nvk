/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkSparseImageFormatProperties2.h"

Nan::Persistent<v8::FunctionTemplate> _VkSparseImageFormatProperties2::constructor;

_VkSparseImageFormatProperties2::_VkSparseImageFormatProperties2() {
  instance.sType = VK_STRUCTURE_TYPE_SPARSE_IMAGE_FORMAT_PROPERTIES_2;
  
}

_VkSparseImageFormatProperties2::~_VkSparseImageFormatProperties2() {
  //printf("VkSparseImageFormatProperties2 deconstructed!!\n");
  
  
  
}

void _VkSparseImageFormatProperties2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSparseImageFormatProperties2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSparseImageFormatProperties2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("properties").ToLocalChecked(), Getproperties, nullptr, ctor);
  Nan::Set(target, Nan::New("VkSparseImageFormatProperties2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSparseImageFormatProperties2::flush() {
  _VkSparseImageFormatProperties2 *self = this;
  if (!(self->properties.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->properties);
    
  }
  return true;
}

NAN_METHOD(_VkSparseImageFormatProperties2::New) {
  if (info.IsConstructCall()) {
    _VkSparseImageFormatProperties2* self = new _VkSparseImageFormatProperties2();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSparseImageFormatProperties2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkSparseImageFormatProperties2::GetsType) {
  _VkSparseImageFormatProperties2 *self = Nan::ObjectWrap::Unwrap<_VkSparseImageFormatProperties2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// properties
NAN_GETTER(_VkSparseImageFormatProperties2::Getproperties) {
  _VkSparseImageFormatProperties2 *self = Nan::ObjectWrap::Unwrap<_VkSparseImageFormatProperties2>(info.This());
  if (self->properties.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->properties);
    info.GetReturnValue().Set(obj);
  }
}