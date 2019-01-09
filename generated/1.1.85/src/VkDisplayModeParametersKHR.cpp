/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayModeParametersKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayModeParametersKHR::constructor;

_VkDisplayModeParametersKHR::_VkDisplayModeParametersKHR() {
  
  
}

_VkDisplayModeParametersKHR::~_VkDisplayModeParametersKHR() {
  //printf("VkDisplayModeParametersKHR deconstructed!!\n");
  
  
  
}

void _VkDisplayModeParametersKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayModeParametersKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayModeParametersKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("visibleRegion").ToLocalChecked(), GetvisibleRegion, SetvisibleRegion, ctor);
  SetPrototypeAccessor(proto, Nan::New("refreshRate").ToLocalChecked(), GetrefreshRate, SetrefreshRate, ctor);
  Nan::Set(target, Nan::New("VkDisplayModeParametersKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayModeParametersKHR::flush() {
  _VkDisplayModeParametersKHR *self = this;
  if (!(self->visibleRegion.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->visibleRegion);
    
    _VkExtent2D* result = Nan::ObjectWrap::Unwrap<_VkExtent2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.visibleRegion = result->instance;
  }
  return true;
}

NAN_METHOD(_VkDisplayModeParametersKHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplayModeParametersKHR* self = new _VkDisplayModeParametersKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("visibleRegion").ToLocalChecked();
      v8::Local<v8::String> sAccess1 = Nan::New("refreshRate").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess1)) info.This()->Set(sAccess1, obj->Get(sAccess1));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayModeParametersKHR constructor cannot be invoked without 'new'");
  }
};

// visibleRegion
NAN_GETTER(_VkDisplayModeParametersKHR::GetvisibleRegion) {
  _VkDisplayModeParametersKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeParametersKHR>(info.This());
  if (self->visibleRegion.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->visibleRegion);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDisplayModeParametersKHR::SetvisibleRegion) {
  _VkDisplayModeParametersKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeParametersKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkExtent2D::constructor)->HasInstance(obj)) {
      self->visibleRegion.Reset<v8::Object>(value.As<v8::Object>());
      _VkExtent2D* inst = Nan::ObjectWrap::Unwrap<_VkExtent2D>(obj);
      inst->flush();
      self->instance.visibleRegion = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkDisplayModeParametersKHR.visibleRegion' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->visibleRegion.Reset();
    memset(&self->instance.visibleRegion, 0, sizeof(VkExtent2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkExtent2D]' for 'VkDisplayModeParametersKHR.visibleRegion' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// refreshRate
NAN_GETTER(_VkDisplayModeParametersKHR::GetrefreshRate) {
  _VkDisplayModeParametersKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeParametersKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.refreshRate));
}NAN_SETTER(_VkDisplayModeParametersKHR::SetrefreshRate) {
  _VkDisplayModeParametersKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayModeParametersKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.refreshRate = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplayModeParametersKHR.refreshRate' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}