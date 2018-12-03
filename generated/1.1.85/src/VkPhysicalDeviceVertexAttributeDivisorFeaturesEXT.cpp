/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.9
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::constructor;

_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_FEATURES_EXT;
  
}

_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::~_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT() {
  //printf("VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexAttributeInstanceRateDivisor").ToLocalChecked(), GetvertexAttributeInstanceRateDivisor, SetvertexAttributeInstanceRateDivisor, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexAttributeInstanceRateZeroDivisor").ToLocalChecked(), GetvertexAttributeInstanceRateZeroDivisor, SetvertexAttributeInstanceRateZeroDivisor, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::flush() {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT* self = new _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("vertexAttributeInstanceRateDivisor").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("vertexAttributeInstanceRateZeroDivisor").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::GetsType) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::SetsType) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vertexAttributeInstanceRateDivisor
NAN_GETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::GetvertexAttributeInstanceRateDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexAttributeInstanceRateDivisor));
}NAN_SETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::SetvertexAttributeInstanceRateDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.vertexAttributeInstanceRateDivisor = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT.vertexAttributeInstanceRateDivisor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vertexAttributeInstanceRateZeroDivisor
NAN_GETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::GetvertexAttributeInstanceRateZeroDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexAttributeInstanceRateZeroDivisor));
}NAN_SETTER(_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT::SetvertexAttributeInstanceRateZeroDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.vertexAttributeInstanceRateZeroDivisor = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVertexAttributeDivisorFeaturesEXT.vertexAttributeInstanceRateZeroDivisor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}