/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDisplayPresentInfoKHR.h"

Nan::Persistent<v8::FunctionTemplate> _VkDisplayPresentInfoKHR::constructor;

_VkDisplayPresentInfoKHR::_VkDisplayPresentInfoKHR() {
  instance.sType = VK_STRUCTURE_TYPE_DISPLAY_PRESENT_INFO_KHR;
  
}

_VkDisplayPresentInfoKHR::~_VkDisplayPresentInfoKHR() {
  //printf("VkDisplayPresentInfoKHR deconstructed!!\n");
  
  
  
  
  
}

void _VkDisplayPresentInfoKHR::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDisplayPresentInfoKHR::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDisplayPresentInfoKHR").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcRect").ToLocalChecked(), GetsrcRect, SetsrcRect, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstRect").ToLocalChecked(), GetdstRect, SetdstRect, ctor);
  SetPrototypeAccessor(proto, Nan::New("persistent").ToLocalChecked(), Getpersistent, Setpersistent, ctor);
  Nan::Set(target, Nan::New("VkDisplayPresentInfoKHR").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDisplayPresentInfoKHR::flush() {
  _VkDisplayPresentInfoKHR *self = this;
  if (!(self->srcRect.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->srcRect);
    
    _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.srcRect = result->instance;
  }if (!(self->dstRect.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->dstRect);
    
    _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.dstRect = result->instance;
  }
  return true;
}

NAN_METHOD(_VkDisplayPresentInfoKHR::New) {
  if (info.IsConstructCall()) {
    _VkDisplayPresentInfoKHR* self = new _VkDisplayPresentInfoKHR();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("srcRect").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("dstRect").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("persistent").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDisplayPresentInfoKHR constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDisplayPresentInfoKHR::GetsType) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDisplayPresentInfoKHR::SetsType) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplayPresentInfoKHR.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// srcRect
NAN_GETTER(_VkDisplayPresentInfoKHR::GetsrcRect) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  if (self->srcRect.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->srcRect);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDisplayPresentInfoKHR::SetsrcRect) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRect2D::constructor)->HasInstance(obj)) {
      self->srcRect.Reset<v8::Object>(value.As<v8::Object>());
      _VkRect2D* inst = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      inst->flush();
      self->instance.srcRect = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkDisplayPresentInfoKHR.srcRect' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->srcRect.Reset();
    memset(&self->instance.srcRect, 0, sizeof(VkRect2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkDisplayPresentInfoKHR.srcRect' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dstRect
NAN_GETTER(_VkDisplayPresentInfoKHR::GetdstRect) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  if (self->dstRect.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->dstRect);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDisplayPresentInfoKHR::SetdstRect) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkRect2D::constructor)->HasInstance(obj)) {
      self->dstRect.Reset<v8::Object>(value.As<v8::Object>());
      _VkRect2D* inst = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      inst->flush();
      self->instance.dstRect = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkDisplayPresentInfoKHR.dstRect' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->dstRect.Reset();
    memset(&self->instance.dstRect, 0, sizeof(VkRect2D));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkDisplayPresentInfoKHR.dstRect' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// persistent
NAN_GETTER(_VkDisplayPresentInfoKHR::Getpersistent) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.persistent));
}NAN_SETTER(_VkDisplayPresentInfoKHR::Setpersistent) {
  _VkDisplayPresentInfoKHR *self = Nan::ObjectWrap::Unwrap<_VkDisplayPresentInfoKHR>(info.This());
  if (value->IsBoolean() || value->IsNumber()) {
    self->instance.persistent = static_cast<uint32_t>(Nan::To<bool>(value).FromMaybe(false)) ? VK_TRUE : VK_FALSE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDisplayPresentInfoKHR.persistent' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}