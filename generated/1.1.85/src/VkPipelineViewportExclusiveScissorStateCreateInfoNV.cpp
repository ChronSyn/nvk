/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineViewportExclusiveScissorStateCreateInfoNV.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineViewportExclusiveScissorStateCreateInfoNV::constructor;

_VkPipelineViewportExclusiveScissorStateCreateInfoNV::_VkPipelineViewportExclusiveScissorStateCreateInfoNV() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_EXCLUSIVE_SCISSOR_STATE_CREATE_INFO_NV;
  vpExclusiveScissors = new std::vector<VkRect2D>;
  
}

_VkPipelineViewportExclusiveScissorStateCreateInfoNV::~_VkPipelineViewportExclusiveScissorStateCreateInfoNV() {
  //printf("VkPipelineViewportExclusiveScissorStateCreateInfoNV deconstructed!!\n");
  
  
  
  vpExclusiveScissors->clear();
  delete vpExclusiveScissors;
  
  pExclusiveScissors.Reset();
  
}

void _VkPipelineViewportExclusiveScissorStateCreateInfoNV::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineViewportExclusiveScissorStateCreateInfoNV").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("exclusiveScissorCount").ToLocalChecked(), GetexclusiveScissorCount, SetexclusiveScissorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pExclusiveScissors").ToLocalChecked(), GetpExclusiveScissors, SetpExclusiveScissors, ctor);
  Nan::Set(target, Nan::New("VkPipelineViewportExclusiveScissorStateCreateInfoNV").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineViewportExclusiveScissorStateCreateInfoNV::flush() {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = this;
  if (!(self->pExclusiveScissors.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pExclusiveScissors);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.exclusiveScissorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'exclusiveScissorCount' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.pExclusiveScissors'");
      return false;
    }
    std::vector<VkRect2D>* data = self->vpExclusiveScissors;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkRect2D::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.pExclusiveScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkRect2D* result = Nan::ObjectWrap::Unwrap<_VkRect2D>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pExclusiveScissors = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::New) {
  if (info.IsConstructCall()) {
    _VkPipelineViewportExclusiveScissorStateCreateInfoNV* self = new _VkPipelineViewportExclusiveScissorStateCreateInfoNV();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("exclusiveScissorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pExclusiveScissors").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineViewportExclusiveScissorStateCreateInfoNV constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::GetsType) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::SetsType) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// exclusiveScissorCount
NAN_GETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::GetexclusiveScissorCount) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.exclusiveScissorCount));
}NAN_SETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::SetexclusiveScissorCount) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  if (value->IsNumber()) {
    self->instance.exclusiveScissorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.exclusiveScissorCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pExclusiveScissors
NAN_GETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::GetpExclusiveScissors) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  if (self->pExclusiveScissors.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pExclusiveScissors);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineViewportExclusiveScissorStateCreateInfoNV::SetpExclusiveScissors) {
  _VkPipelineViewportExclusiveScissorStateCreateInfoNV *self = Nan::ObjectWrap::Unwrap<_VkPipelineViewportExclusiveScissorStateCreateInfoNV>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pExclusiveScissors.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pExclusiveScissors.Reset();
      self->instance.pExclusiveScissors = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.pExclusiveScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pExclusiveScissors = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkRect2D]' for 'VkPipelineViewportExclusiveScissorStateCreateInfoNV.pExclusiveScissors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}