/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPhysicalDeviceDiscardRectanglePropertiesEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPhysicalDeviceDiscardRectanglePropertiesEXT::constructor;

_VkPhysicalDeviceDiscardRectanglePropertiesEXT::_VkPhysicalDeviceDiscardRectanglePropertiesEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PHYSICAL_DEVICE_DISCARD_RECTANGLE_PROPERTIES_EXT;
  
}

_VkPhysicalDeviceDiscardRectanglePropertiesEXT::~_VkPhysicalDeviceDiscardRectanglePropertiesEXT() {
  //printf("VkPhysicalDeviceDiscardRectanglePropertiesEXT deconstructed!!\n");
  
  
  
}

void _VkPhysicalDeviceDiscardRectanglePropertiesEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPhysicalDeviceDiscardRectanglePropertiesEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxDiscardRectangles").ToLocalChecked(), GetmaxDiscardRectangles, SetmaxDiscardRectangles, ctor);
  Nan::Set(target, Nan::New("VkPhysicalDeviceDiscardRectanglePropertiesEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPhysicalDeviceDiscardRectanglePropertiesEXT::flush() {
  _VkPhysicalDeviceDiscardRectanglePropertiesEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::New) {
  if (info.IsConstructCall()) {
    _VkPhysicalDeviceDiscardRectanglePropertiesEXT* self = new _VkPhysicalDeviceDiscardRectanglePropertiesEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("maxDiscardRectangles").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPhysicalDeviceDiscardRectanglePropertiesEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::GetsType) {
  _VkPhysicalDeviceDiscardRectanglePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::SetsType) {
  _VkPhysicalDeviceDiscardRectanglePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceDiscardRectanglePropertiesEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// maxDiscardRectangles
NAN_GETTER(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::GetmaxDiscardRectangles) {
  _VkPhysicalDeviceDiscardRectanglePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxDiscardRectangles));
}NAN_SETTER(_VkPhysicalDeviceDiscardRectanglePropertiesEXT::SetmaxDiscardRectangles) {
  _VkPhysicalDeviceDiscardRectanglePropertiesEXT *self = Nan::ObjectWrap::Unwrap<_VkPhysicalDeviceDiscardRectanglePropertiesEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.maxDiscardRectangles = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPhysicalDeviceDiscardRectanglePropertiesEXT.maxDiscardRectangles' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}