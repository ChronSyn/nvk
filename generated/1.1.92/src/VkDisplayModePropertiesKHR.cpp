/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayModePropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayModePropertiesKHR::constructor;

_VkDisplayModePropertiesKHR::_VkDisplayModePropertiesKHR() {
  
  
}

_VkDisplayModePropertiesKHR::~_VkDisplayModePropertiesKHR() {
  //printf("VkDisplayModePropertiesKHR deconstructed!!\n");
  
  
  
}

void _VkDisplayModePropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayModePropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayModePropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("displayMode").ToLocalChecked(), GetdisplayMode, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("parameters").ToLocalChecked(), Getparameters, nullptr, ctor);
  Nan::Set(target, Nan::New("VkDisplayModePropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayModePropertiesKHR::flush() {
  _VkDisplayModePropertiesKHR *self = this;
  if (!(self->parameters.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->parameters);
    
  }
  return true;
}

NAN_METHOD(_VkDisplayModePropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplayModePropertiesKHR* self = new _VkDisplayModePropertiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayModePropertiesKHR constructor cannot be invoked without 'new'");
  }
};

// displayMode
NAN_GETTER(_VkDisplayModePropertiesKHR::GetdisplayMode) {
  _VkDisplayModePropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModePropertiesKHR>(info.This());
  if (self->displayMode.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->displayMode);
    info.GetReturnValue().Set(obj);
  }
}// parameters
NAN_GETTER(_VkDisplayModePropertiesKHR::Getparameters) {
  _VkDisplayModePropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModePropertiesKHR>(info.This());
  if (self->parameters.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->parameters);
    info.GetReturnValue().Set(obj);
  }
}