/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceFeatures2KHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceFeatures2KHR::constructor;

_VkPhysicalDeviceFeatures2KHR::_VkPhysicalDeviceFeatures2KHR() {
  
  
}

_VkPhysicalDeviceFeatures2KHR::~_VkPhysicalDeviceFeatures2KHR() {
  //printf("VkPhysicalDeviceFeatures2KHR deconstructed!!\n");
  
}

void _VkPhysicalDeviceFeatures2KHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceFeatures2KHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceFeatures2KHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDeviceFeatures2KHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceFeatures2KHR::flush() {
  _VkPhysicalDeviceFeatures2KHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceFeatures2KHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceFeatures2KHR* self = new _VkPhysicalDeviceFeatures2KHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceFeatures2KHR constructor cannot be invoked without 'new'");
  }
};

