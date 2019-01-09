/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkIndirectCommandsLayoutCreateInfoNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkIndirectCommandsLayoutCreateInfoNVX::constructor;

_VkIndirectCommandsLayoutCreateInfoNVX::_VkIndirectCommandsLayoutCreateInfoNVX() {
  instance.sType = VK_STRUCTURE_TYPE_INDIRECT_COMMANDS_LAYOUT_CREATE_INFO_NVX;
  vpTokens = new std::vector<VkIndirectCommandsLayoutTokenNVX>;
  
}

_VkIndirectCommandsLayoutCreateInfoNVX::~_VkIndirectCommandsLayoutCreateInfoNVX() {
  //printf("VkIndirectCommandsLayoutCreateInfoNVX deconstructed!!\n");
  
  
  
  
  
  vpTokens->clear();
  delete vpTokens;
  
  pTokens.Reset();
  
}

void _VkIndirectCommandsLayoutCreateInfoNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkIndirectCommandsLayoutCreateInfoNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkIndirectCommandsLayoutCreateInfoNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("pipelineBindPoint").ToLocalChecked(), GetpipelineBindPoint, SetpipelineBindPoint, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("tokenCount").ToLocalChecked(), GettokenCount, SettokenCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pTokens").ToLocalChecked(), GetpTokens, SetpTokens, ctor);
  Nan::Set(target, Nan::New("VkIndirectCommandsLayoutCreateInfoNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkIndirectCommandsLayoutCreateInfoNVX::flush() {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = this;
  if (!(self->pTokens.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pTokens);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.tokenCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'tokenCount' for 'VkIndirectCommandsLayoutCreateInfoNVX.pTokens'");
      return false;
    }
    std::vector<VkIndirectCommandsLayoutTokenNVX>* data = self->vpTokens;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkIndirectCommandsLayoutTokenNVX::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkIndirectCommandsLayoutTokenNVX]' for 'VkIndirectCommandsLayoutCreateInfoNVX.pTokens' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkIndirectCommandsLayoutTokenNVX* result = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutTokenNVX>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pTokens = data->data();
  }
  return true;
}

NAN_METHOD(_VkIndirectCommandsLayoutCreateInfoNVX::New) {
  if (info.IsConstructCall()) {
    _VkIndirectCommandsLayoutCreateInfoNVX* self = new _VkIndirectCommandsLayoutCreateInfoNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("pipelineBindPoint").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("tokenCount").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pTokens").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkIndirectCommandsLayoutCreateInfoNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkIndirectCommandsLayoutCreateInfoNVX::GetsType) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkIndirectCommandsLayoutCreateInfoNVX::SetsType) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutCreateInfoNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pipelineBindPoint
NAN_GETTER(_VkIndirectCommandsLayoutCreateInfoNVX::GetpipelineBindPoint) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.pipelineBindPoint));
}NAN_SETTER(_VkIndirectCommandsLayoutCreateInfoNVX::SetpipelineBindPoint) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.pipelineBindPoint = static_cast<VkPipelineBindPoint>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutCreateInfoNVX.pipelineBindPoint' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkIndirectCommandsLayoutCreateInfoNVX::Getflags) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkIndirectCommandsLayoutCreateInfoNVX::Setflags) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkIndirectCommandsLayoutUsageFlagsNVX>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutCreateInfoNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// tokenCount
NAN_GETTER(_VkIndirectCommandsLayoutCreateInfoNVX::GettokenCount) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.tokenCount));
}NAN_SETTER(_VkIndirectCommandsLayoutCreateInfoNVX::SettokenCount) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.tokenCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkIndirectCommandsLayoutCreateInfoNVX.tokenCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pTokens
NAN_GETTER(_VkIndirectCommandsLayoutCreateInfoNVX::GetpTokens) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  if (self->pTokens.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pTokens);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkIndirectCommandsLayoutCreateInfoNVX::SetpTokens) {
  _VkIndirectCommandsLayoutCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkIndirectCommandsLayoutCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pTokens.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pTokens.Reset();
      self->instance.pTokens = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkIndirectCommandsLayoutTokenNVX]' for 'VkIndirectCommandsLayoutCreateInfoNVX.pTokens' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pTokens = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkIndirectCommandsLayoutTokenNVX]' for 'VkIndirectCommandsLayoutCreateInfoNVX.pTokens' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}