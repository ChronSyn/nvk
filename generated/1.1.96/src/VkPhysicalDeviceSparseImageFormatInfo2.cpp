/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceSparseImageFormatInfo2.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceSparseImageFormatInfo2::constructor;

_VkPhysicalDeviceSparseImageFormatInfo2::_VkPhysicalDeviceSparseImageFormatInfo2() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SPARSE_IMAGE_FORMAT_INFO_2;
  
}

_VkPhysicalDeviceSparseImageFormatInfo2::~_VkPhysicalDeviceSparseImageFormatInfo2() {
  //printf("VkPhysicalDeviceSparseImageFormatInfo2 deconstructed!!\n");
  
  
  
  
  
  
  
}

void _VkPhysicalDeviceSparseImageFormatInfo2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceSparseImageFormatInfo2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceSparseImageFormatInfo2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("format").ToLocalChecked(), Getformat, Setformat, ctor);
  SetPrototypeAccessor(proto, Nan::New("type").ToLocalChecked(), Gettype, Settype, ctor);
  SetPrototypeAccessor(proto, Nan::New("samples").ToLocalChecked(), Getsamples, Setsamples, ctor);
  SetPrototypeAccessor(proto, Nan::New("usage").ToLocalChecked(), Getusage, Setusage, ctor);
  SetPrototypeAccessor(proto, Nan::New("tiling").ToLocalChecked(), Gettiling, Settiling, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceSparseImageFormatInfo2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceSparseImageFormatInfo2::flush() {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceSparseImageFormatInfo2::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceSparseImageFormatInfo2* self = new _VkPhysicalDeviceSparseImageFormatInfo2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("format").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("type").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("samples").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("usage").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("tiling").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceSparseImageFormatInfo2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::GetsType) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::SetsType) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// format
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Getformat) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.format));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Setformat) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.format = static_cast<VkFormat>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.format' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// type
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Gettype) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.type));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Settype) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.type = static_cast<VkImageType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.type' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// samples
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Getsamples) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.samples));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Setsamples) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.samples = static_cast<VkSampleCountFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.samples' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// usage
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Getusage) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.usage));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Setusage) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.usage = static_cast<VkImageUsageFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.usage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// tiling
NAN_GETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Gettiling) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.tiling));
}NAN_SETTER(_VkPhysicalDeviceSparseImageFormatInfo2::Settiling) {
  _VkPhysicalDeviceSparseImageFormatInfo2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceSparseImageFormatInfo2>(info.This());
  if (value->IsNumber()) {
    self->instance.tiling = static_cast<VkImageTiling>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceSparseImageFormatInfo2.tiling' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}