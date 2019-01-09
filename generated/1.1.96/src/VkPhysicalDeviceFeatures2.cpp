/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceFeatures2.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceFeatures2::constructor;

_VkPhysicalDeviceFeatures2::_VkPhysicalDeviceFeatures2() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_FEATURES_2;
  
}

_VkPhysicalDeviceFeatures2::~_VkPhysicalDeviceFeatures2() {
  //printf("VkPhysicalDeviceFeatures2 deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceFeatures2::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceFeatures2::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceFeatures2").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("features").ToLocalChecked(), Getfeatures, Setfeatures, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceFeatures2").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceFeatures2::flush() {
  _VkPhysicalDeviceFeatures2 *self = this;
  if (!(self->features.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->features);
    
    _VkPhysicalDeviceFeatures* result = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures>(Nan::To<v8::Object>(value).ToLocalChecked());
    if (!result->flush()) return false;
    self->instance.features = result->instance;
  }
  return true;
}

NAN_METHOD(_VkPhysicalDeviceFeatures2::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceFeatures2* self = new _VkPhysicalDeviceFeatures2();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("features").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceFeatures2 constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceFeatures2::GetsType) {
  _VkPhysicalDeviceFeatures2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures2>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceFeatures2::SetsType) {
  _VkPhysicalDeviceFeatures2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures2>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceFeatures2.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// features
NAN_GETTER(_VkPhysicalDeviceFeatures2::Getfeatures) {
  _VkPhysicalDeviceFeatures2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures2>(info.This());
  if (self->features.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->features);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPhysicalDeviceFeatures2::Setfeatures) {
  _VkPhysicalDeviceFeatures2 *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures2>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPhysicalDeviceFeatures::constructor)->HasInstance(obj)) {
      self->features.Reset<v8::Object>(value.As<v8::Object>());
      _VkPhysicalDeviceFeatures* inst = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceFeatures>(obj);
      inst->flush();
      self->instance.features = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPhysicalDeviceFeatures]' for 'VkPhysicalDeviceFeatures2.features' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->features.Reset();
    memset(&self->instance.features, 0, sizeof(VkPhysicalDeviceFeatures));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPhysicalDeviceFeatures]' for 'VkPhysicalDeviceFeatures2.features' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}