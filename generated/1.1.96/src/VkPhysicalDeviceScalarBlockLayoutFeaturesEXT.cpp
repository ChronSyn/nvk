/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceScalarBlockLayoutFeaturesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::constructor;

_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_SCALAR_BLOCK_LAYOUT_FEATURES_EXT;
  
}

_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::~_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT() {
  //printf("VkPhysicalDeviceScalarBlockLayoutFeaturesEXT deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceScalarBlockLayoutFeaturesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("scalarBlockLayout").ToLocalChecked(), GetscalarBlockLayout, SetscalarBlockLayout, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceScalarBlockLayoutFeaturesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::flush() {
  _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT* self = new _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("scalarBlockLayout").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceScalarBlockLayoutFeaturesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::GetsType) {
  _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::SetsType) {
  _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceScalarBlockLayoutFeaturesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// scalarBlockLayout
NAN_GETTER(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::GetscalarBlockLayout) {
  _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.scalarBlockLayout));
}NAN_SETTER(_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT::SetscalarBlockLayout) {
  _VkPhysicalDeviceScalarBlockLayoutFeaturesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceScalarBlockLayoutFeaturesEXT>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.scalarBlockLayout = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceScalarBlockLayoutFeaturesEXT.scalarBlockLayout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}