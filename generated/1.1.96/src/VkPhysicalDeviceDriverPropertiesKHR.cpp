/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include <string.h>
#include "index.h"
#include "VkPhysicalDeviceDriverPropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceDriverPropertiesKHR::constructor;

_VkPhysicalDeviceDriverPropertiesKHR::_VkPhysicalDeviceDriverPropertiesKHR() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DRIVER_PROPERTIES_KHR;
  
}

_VkPhysicalDeviceDriverPropertiesKHR::~_VkPhysicalDeviceDriverPropertiesKHR() {
  //printf("VkPhysicalDeviceDriverPropertiesKHR deconstructed!!\n");
  
  
  
  
  
  
}

void _VkPhysicalDeviceDriverPropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceDriverPropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceDriverPropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("driverID").ToLocalChecked(), GetdriverID, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("driverName").ToLocalChecked(), GetdriverName, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("driverInfo").ToLocalChecked(), GetdriverInfo, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("conformanceVersion").ToLocalChecked(), GetconformanceVersion, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceDriverPropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceDriverPropertiesKHR::flush() {
  _VkPhysicalDeviceDriverPropertiesKHR *self = this;
  if (!(self->conformanceVersion.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->conformanceVersion);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceDriverPropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceDriverPropertiesKHR* self = new _VkPhysicalDeviceDriverPropertiesKHR();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceDriverPropertiesKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceDriverPropertiesKHR::GetsType) {
  _VkPhysicalDeviceDriverPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDriverPropertiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// driverID
NAN_GETTER(_VkPhysicalDeviceDriverPropertiesKHR::GetdriverID) {
  _VkPhysicalDeviceDriverPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDriverPropertiesKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.driverID));
}// driverName
NAN_GETTER(_VkPhysicalDeviceDriverPropertiesKHR::GetdriverName) {
  _VkPhysicalDeviceDriverPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDriverPropertiesKHR>(info.This());
  if (self->driverName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->driverName));
  }
}// driverInfo
NAN_GETTER(_VkPhysicalDeviceDriverPropertiesKHR::GetdriverInfo) {
  _VkPhysicalDeviceDriverPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDriverPropertiesKHR>(info.This());
  if (self->driverInfo.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    info.GetReturnValue().Set(Nan::New(self->driverInfo));
  }
}// conformanceVersion
NAN_GETTER(_VkPhysicalDeviceDriverPropertiesKHR::GetconformanceVersion) {
  _VkPhysicalDeviceDriverPropertiesKHR *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDriverPropertiesKHR>(info.This());
  if (self->conformanceVersion.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->conformanceVersion);
    info.GetReturnValue().Set(obj);
  }
}