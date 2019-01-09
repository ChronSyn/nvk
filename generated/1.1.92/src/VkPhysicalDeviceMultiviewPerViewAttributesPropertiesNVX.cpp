/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::constructor;

_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MULTIVIEW_PER_VIEW_ATTRIBUTES_PROPERTIES_NVX;
  
}

_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::~_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX() {
  //printf("VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("perViewPositionAllComponents").ToLocalChecked(), GetperViewPositionAllComponents, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::flush() {
  _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX* self = new _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::GetsType) {
  _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// perViewPositionAllComponents
NAN_GETTER(_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX::GetperViewPositionAllComponents) {
  _VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMultiviewPerViewAttributesPropertiesNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.perViewPositionAllComponents));
}