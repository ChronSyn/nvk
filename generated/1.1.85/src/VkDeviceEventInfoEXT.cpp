/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDeviceEventInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDeviceEventInfoEXT::constructor;

_VkDeviceEventInfoEXT::_VkDeviceEventInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DEVICE_EVENT_INFO_EXT;
  
}

_VkDeviceEventInfoEXT::~_VkDeviceEventInfoEXT() {
  //printf("VkDeviceEventInfoEXT deconstructed!!\n");
  
  
  
}

void _VkDeviceEventInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDeviceEventInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDeviceEventInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("deviceEvent").ToLocalChecked(), GetdeviceEvent, SetdeviceEvent, ctor);
  Nan::Set(target, Nan::New("VkDeviceEventInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDeviceEventInfoEXT::flush() {
  _VkDeviceEventInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkDeviceEventInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkDeviceEventInfoEXT* self = new _VkDeviceEventInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("deviceEvent").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDeviceEventInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDeviceEventInfoEXT::GetsType) {
  _VkDeviceEventInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDeviceEventInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDeviceEventInfoEXT::SetsType) {
  _VkDeviceEventInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDeviceEventInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceEventInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// deviceEvent
NAN_GETTER(_VkDeviceEventInfoEXT::GetdeviceEvent) {
  _VkDeviceEventInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDeviceEventInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.deviceEvent));
}NAN_SETTER(_VkDeviceEventInfoEXT::SetdeviceEvent) {
  _VkDeviceEventInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkDeviceEventInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.deviceEvent = static_cast<VkDeviceEventTypeEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDeviceEventInfoEXT.deviceEvent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}