/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceMeshShaderFeaturesNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceMeshShaderFeaturesNV::constructor;

_VkPhysicalDeviceMeshShaderFeaturesNV::_VkPhysicalDeviceMeshShaderFeaturesNV() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_MESH_SHADER_FEATURES_NV;
  
}

_VkPhysicalDeviceMeshShaderFeaturesNV::~_VkPhysicalDeviceMeshShaderFeaturesNV() {
  //printf("VkPhysicalDeviceMeshShaderFeaturesNV deconstructed!!\n");
  
  
  
  
}

void _VkPhysicalDeviceMeshShaderFeaturesNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceMeshShaderFeaturesNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceMeshShaderFeaturesNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("taskShader").ToLocalChecked(), GettaskShader, SettaskShader, ctor);
  SetPrototypeAccessor(proto, Nan::New("meshShader").ToLocalChecked(), GetmeshShader, SetmeshShader, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceMeshShaderFeaturesNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceMeshShaderFeaturesNV::flush() {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceMeshShaderFeaturesNV::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceMeshShaderFeaturesNV* self = new _VkPhysicalDeviceMeshShaderFeaturesNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("taskShader").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("meshShader").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceMeshShaderFeaturesNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::GetsType) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::SetsType) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceMeshShaderFeaturesNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// taskShader
NAN_GETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::GettaskShader) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.taskShader));
}NAN_SETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::SettaskShader) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.taskShader = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceMeshShaderFeaturesNV.taskShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// meshShader
NAN_GETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::GetmeshShader) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.meshShader));
}NAN_SETTER(_VkPhysicalDeviceMeshShaderFeaturesNV::SetmeshShader) {
  _VkPhysicalDeviceMeshShaderFeaturesNV *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceMeshShaderFeaturesNV>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.meshShader = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceMeshShaderFeaturesNV.meshShader' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}