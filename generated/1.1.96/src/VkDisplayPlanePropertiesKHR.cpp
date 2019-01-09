/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayPlanePropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayPlanePropertiesKHR::constructor;

_VkDisplayPlanePropertiesKHR::_VkDisplayPlanePropertiesKHR() {
  
  
}

_VkDisplayPlanePropertiesKHR::~_VkDisplayPlanePropertiesKHR() {
  //printf("VkDisplayPlanePropertiesKHR deconstructed!!\n");
  
  
  
}

void _VkDisplayPlanePropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayPlanePropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayPlanePropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("currentDisplay").ToLocalChecked(), GetcurrentDisplay, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("currentStackIndex").ToLocalChecked(), GetcurrentStackIndex, nullptr, ctor);
  Nan::Set(target, Nan::New("VkDisplayPlanePropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayPlanePropertiesKHR::flush() {
  _VkDisplayPlanePropertiesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkDisplayPlanePropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplayPlanePropertiesKHR* self = new _VkDisplayPlanePropertiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayPlanePropertiesKHR constructor cannot be invoked without 'new'");
  }
};

// currentDisplay
NAN_GETTER(_VkDisplayPlanePropertiesKHR::GetcurrentDisplay) {
  _VkDisplayPlanePropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPlanePropertiesKHR>(info.This());
  if (self->currentDisplay.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->currentDisplay);
    info.GetReturnValue().Set(obj);
  }
}// currentStackIndex
NAN_GETTER(_VkDisplayPlanePropertiesKHR::GetcurrentStackIndex) {
  _VkDisplayPlanePropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPlanePropertiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.currentStackIndex));
}