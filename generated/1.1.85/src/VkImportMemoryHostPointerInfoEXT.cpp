/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkImportMemoryHostPointerInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkImportMemoryHostPointerInfoEXT::constructor;

_VkImportMemoryHostPointerInfoEXT::_VkImportMemoryHostPointerInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_IMPORT_MEMORY_HOST_POINTER_INFO_EXT;
  
}

_VkImportMemoryHostPointerInfoEXT::~_VkImportMemoryHostPointerInfoEXT() {
  //printf("VkImportMemoryHostPointerInfoEXT deconstructed!!\n");
  
  
  
}

void _VkImportMemoryHostPointerInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImportMemoryHostPointerInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImportMemoryHostPointerInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("handleType").ToLocalChecked(), GethandleType, SethandleType, ctor);
  Nan::Set(target, Nan::New("VkImportMemoryHostPointerInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkImportMemoryHostPointerInfoEXT::flush() {
  _VkImportMemoryHostPointerInfoEXT *self = this;
  
  return true;
}

NAN_METHOD(_VkImportMemoryHostPointerInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkImportMemoryHostPointerInfoEXT* self = new _VkImportMemoryHostPointerInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("handleType").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkImportMemoryHostPointerInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkImportMemoryHostPointerInfoEXT::GetsType) {
  _VkImportMemoryHostPointerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkImportMemoryHostPointerInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImportMemoryHostPointerInfoEXT::SetsType) {
  _VkImportMemoryHostPointerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkImportMemoryHostPointerInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImportMemoryHostPointerInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// handleType
NAN_GETTER(_VkImportMemoryHostPointerInfoEXT::GethandleType) {
  _VkImportMemoryHostPointerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkImportMemoryHostPointerInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.handleType));
}NAN_SETTER(_VkImportMemoryHostPointerInfoEXT::SethandleType) {
  _VkImportMemoryHostPointerInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkImportMemoryHostPointerInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.handleType = static_cast<VkExternalMemoryHandleTypeFlagBits>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkImportMemoryHostPointerInfoEXT.handleType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}