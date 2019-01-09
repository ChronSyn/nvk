/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkCalibratedTimestampInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkCalibratedTimestampInfoEXT::constructor;

_VkCalibratedTimestampInfoEXT::_VkCalibratedTimestampInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_CALIBRATED_TIMESTAMP_INFO_EXT;
  
}

_VkCalibratedTimestampInfoEXT::~_VkCalibratedTimestampInfoEXT() {
  //printf("VkCalibratedTimestampInfoEXT deconstructed!!\n");
  
  
  
}

void _VkCalibratedTimestampInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkCalibratedTimestampInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkCalibratedTimestampInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("timeDomain").ToLocalChecked(), GettimeDomain, SettimeDomain, ctor);
  Nan::Set(target, Nan::New("VkCalibratedTimestampInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkCalibratedTimestampInfoEXT::flush() {
  _VkCalibratedTimestampInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkCalibratedTimestampInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkCalibratedTimestampInfoEXT* self = new _VkCalibratedTimestampInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("timeDomain").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkCalibratedTimestampInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkCalibratedTimestampInfoEXT::GetsType) {
  _VkCalibratedTimestampInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCalibratedTimestampInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkCalibratedTimestampInfoEXT::SetsType) {
  _VkCalibratedTimestampInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCalibratedTimestampInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCalibratedTimestampInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// timeDomain
NAN_GETTER(_VkCalibratedTimestampInfoEXT::GettimeDomain) {
  _VkCalibratedTimestampInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCalibratedTimestampInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.timeDomain));
}NAN_SETTER(_VkCalibratedTimestampInfoEXT::SettimeDomain) {
  _VkCalibratedTimestampInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkCalibratedTimestampInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.timeDomain = static_cast<VkTimeDomainEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkCalibratedTimestampInfoEXT.timeDomain' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}