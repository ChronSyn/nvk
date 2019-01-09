/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkExternalMemoryProperties.h"

Nan::Persistent<v8::FunctionTemplate> _VkExternalMemoryProperties::constructor;

_VkExternalMemoryProperties::_VkExternalMemoryProperties() {
  
  
}

_VkExternalMemoryProperties::~_VkExternalMemoryProperties() {
  //printf("VkExternalMemoryProperties deconstructed!!\n");
  
  
  
  
}

void _VkExternalMemoryProperties::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkExternalMemoryProperties::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkExternalMemoryProperties").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("externalMemoryFeatures").ToLocalChecked(), GetexternalMemoryFeatures, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("exportFromImportedHandleTypes").ToLocalChecked(), GetexportFromImportedHandleTypes, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("compatibleHandleTypes").ToLocalChecked(), GetcompatibleHandleTypes, nullptr, ctor);
  Nan::Set(target, Nan::New("VkExternalMemoryProperties").ToLocalChecked(), ctor->GetFunction());
}

bool _VkExternalMemoryProperties::flush() {
  _VkExternalMemoryProperties *self = this;
  
  return true;
}

NAN_METHOD(_VkExternalMemoryProperties::New) {
  if (info.IsConstructCall()) {
    _VkExternalMemoryProperties* self = new _VkExternalMemoryProperties();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkExternalMemoryProperties constructor cannot be invoked without 'new'");
  }
};

// externalMemoryFeatures
NAN_GETTER(_VkExternalMemoryProperties::GetexternalMemoryFeatures) {
  _VkExternalMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalMemoryProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.externalMemoryFeatures));
}// exportFromImportedHandleTypes
NAN_GETTER(_VkExternalMemoryProperties::GetexportFromImportedHandleTypes) {
  _VkExternalMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalMemoryProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.exportFromImportedHandleTypes));
}// compatibleHandleTypes
NAN_GETTER(_VkExternalMemoryProperties::GetcompatibleHandleTypes) {
  _VkExternalMemoryProperties *self = Nan::ObjectWrap::Unwrap<_VkExternalMemoryProperties>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.compatibleHandleTypes));
}