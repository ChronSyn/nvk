/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceIDPropertiesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceIDPropertiesKHR::constructor;

_VkPhysicalDeviceIDPropertiesKHR::_VkPhysicalDeviceIDPropertiesKHR() {
  
  
}

_VkPhysicalDeviceIDPropertiesKHR::~_VkPhysicalDeviceIDPropertiesKHR() {
  //printf("VkPhysicalDeviceIDPropertiesKHR deconstructed!!\n");
  
}

void _VkPhysicalDeviceIDPropertiesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceIDPropertiesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceIDPropertiesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDeviceIDPropertiesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceIDPropertiesKHR::flush() {
  _VkPhysicalDeviceIDPropertiesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceIDPropertiesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceIDPropertiesKHR* self = new _VkPhysicalDeviceIDPropertiesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceIDPropertiesKHR constructor cannot be invoked without 'new'");
  }
};

