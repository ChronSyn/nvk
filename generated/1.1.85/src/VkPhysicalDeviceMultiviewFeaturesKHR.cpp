/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceMultiviewFeaturesKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMultiviewFeaturesKHR::constructor;

_VkPhysicalDeviceMultiviewFeaturesKHR::_VkPhysicalDeviceMultiviewFeaturesKHR() {
  
  
}

_VkPhysicalDeviceMultiviewFeaturesKHR::~_VkPhysicalDeviceMultiviewFeaturesKHR() {
  //printf("VkPhysicalDeviceMultiviewFeaturesKHR deconstructed!!\n");
  
}

void _VkPhysicalDeviceMultiviewFeaturesKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMultiviewFeaturesKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMultiviewFeaturesKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  Nan::Set(target, Nan::New("VkPhysicalDeviceMultiviewFeaturesKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceMultiviewFeaturesKHR::flush() {
  _VkPhysicalDeviceMultiviewFeaturesKHR *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceMultiviewFeaturesKHR::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMultiviewFeaturesKHR* self = new _VkPhysicalDeviceMultiviewFeaturesKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMultiviewFeaturesKHR constructor cannot be invoked without 'new'");
  }
};

