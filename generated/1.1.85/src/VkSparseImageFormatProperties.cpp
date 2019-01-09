/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkSparseImageFormatProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkSparseImageFormatProperties::constructor;

_VkSparseImageFormatProperties::_VkSparseImageFormatProperties() {
  
  
}

_VkSparseImageFormatProperties::~_VkSparseImageFormatProperties() {
  //printf("VkSparseImageFormatProperties deconstructed!!\n");
  
  
  
  
}

void _VkSparseImageFormatProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSparseImageFormatProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSparseImageFormatProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("aspectMask").ToLocalChecked(), GetaspectMask, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("imageGranularity").ToLocalChecked(), GetimageGranularity, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, nullptr, ctor);
  Nan::Set(target, Nan::New("VkSparseImageFormatProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkSparseImageFormatProperties::flush() {
  _VkSparseImageFormatProperties *self = this;
  if (!(self->imageGranularity.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->imageGranularity);
    
  }
  return true;
}

NAN_METHOD(_VkSparseImageFormatProperties::New) {
  if (info.IsConstructCall()) {
    _VkSparseImageFormatProperties* self = new _VkSparseImageFormatProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkSparseImageFormatProperties constructor cannot be invoked without 'new'");
  }
};

// aspectMask
NAN_GETTER(_VkSparseImageFormatProperties::GetaspectMask) {
  _VkSparseImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkSparseImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.aspectMask));
}// imageGranularity
NAN_GETTER(_VkSparseImageFormatProperties::GetimageGranularity) {
  _VkSparseImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkSparseImageFormatProperties>(info.This());
  if (self->imageGranularity.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->imageGranularity);
    info.GetReturnValue().Set(obj);
  }
}// flags
NAN_GETTER(_VkSparseImageFormatProperties::Getflags) {
  _VkSparseImageFormatProperties *self = Nan::ObjectWrap::Unwrap<_VkSparseImageFormatProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}