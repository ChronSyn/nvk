/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceShadingRateImagePropertiesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceShadingRateImagePropertiesNV::constructor;

_VkPhysicalDeviceShadingRateImagePropertiesNV::_VkPhysicalDeviceShadingRateImagePropertiesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SHADING_RATE_IMAGE_PROPERTIES_NV;
  
}

_VkPhysicalDeviceShadingRateImagePropertiesNV::~_VkPhysicalDeviceShadingRateImagePropertiesNV() {
  //printf("VkPhysicalDeviceShadingRateImagePropertiesNV deconstructed!!\n");
  
  
  
  
  
}

void _VkPhysicalDeviceShadingRateImagePropertiesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceShadingRateImagePropertiesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceShadingRateImagePropertiesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("shadingRateTexelSize").ToLocalChecked(), GetshadingRateTexelSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("shadingRatePaletteSize").ToLocalChecked(), GetshadingRatePaletteSize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("shadingRateMaxCoarseSamples").ToLocalChecked(), GetshadingRateMaxCoarseSamples, nullptr, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceShadingRateImagePropertiesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceShadingRateImagePropertiesNV::flush() {
  _VkPhysicalDeviceShadingRateImagePropertiesNV *self = this;
  if (!(self->shadingRateTexelSize.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->shadingRateTexelSize);
    
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceShadingRateImagePropertiesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceShadingRateImagePropertiesNV* self = new _VkPhysicalDeviceShadingRateImagePropertiesNV();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceShadingRateImagePropertiesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceShadingRateImagePropertiesNV::GetsType) {
  _VkPhysicalDeviceShadingRateImagePropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShadingRateImagePropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}// shadingRateTexelSize
NAN_GETTER(_VkPhysicalDeviceShadingRateImagePropertiesNV::GetshadingRateTexelSize) {
  _VkPhysicalDeviceShadingRateImagePropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShadingRateImagePropertiesNV>(info.This());
  if (self->shadingRateTexelSize.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->shadingRateTexelSize);
    info.GetReturnValue().Set(obj);
  }
}// shadingRatePaletteSize
NAN_GETTER(_VkPhysicalDeviceShadingRateImagePropertiesNV::GetshadingRatePaletteSize) {
  _VkPhysicalDeviceShadingRateImagePropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShadingRateImagePropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shadingRatePaletteSize));
}// shadingRateMaxCoarseSamples
NAN_GETTER(_VkPhysicalDeviceShadingRateImagePropertiesNV::GetshadingRateMaxCoarseSamples) {
  _VkPhysicalDeviceShadingRateImagePropertiesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceShadingRateImagePropertiesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.shadingRateMaxCoarseSamples));
}