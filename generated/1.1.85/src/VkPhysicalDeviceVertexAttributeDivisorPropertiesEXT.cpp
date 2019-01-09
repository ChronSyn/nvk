/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::constructor;

_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_VERTEX_ATTRIBUTE_DIVISOR_PROPERTIES_EXT;
  
}

_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::~_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT() {
  //printf("VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxVertexAttribDivisor").ToLocalChecked(), GetmaxVertexAttribDivisor, SetmaxVertexAttribDivisor, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::flush() {
  _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT* self = new _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("maxVertexAttribDivisor").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::GetsType) {
  _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::SetsType) {
  _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxVertexAttribDivisor
NAN_GETTER(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::GetmaxVertexAttribDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxVertexAttribDivisor));
}NAN_SETTER(_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT::SetmaxVertexAttribDivisor) {
  _VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.maxVertexAttribDivisor = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceVertexAttributeDivisorPropertiesEXT.maxVertexAttribDivisor' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}