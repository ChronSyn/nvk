/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkPipelineVertexInputDivisorStateCreateInfoEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkPipelineVertexInputDivisorStateCreateInfoEXT::constructor;

_VkPipelineVertexInputDivisorStateCreateInfoEXT::_VkPipelineVertexInputDivisorStateCreateInfoEXT() {
  instance.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_DIVISOR_STATE_CREATE_INFO_EXT;
  vpVertexBindingDivisors = new std::vector<VkVertexInputBindingDivisorDescriptionEXT>;
  
}

_VkPipelineVertexInputDivisorStateCreateInfoEXT::~_VkPipelineVertexInputDivisorStateCreateInfoEXT() {
  //printf("VkPipelineVertexInputDivisorStateCreateInfoEXT deconstructed!!\n");
  
  
  
  vpVertexBindingDivisors->clear();
  delete vpVertexBindingDivisors;
  
  pVertexBindingDivisors.Reset();
  
}

void _VkPipelineVertexInputDivisorStateCreateInfoEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkPipelineVertexInputDivisorStateCreateInfoEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkPipelineVertexInputDivisorStateCreateInfoEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("vertexBindingDivisorCount").ToLocalChecked(), GetvertexBindingDivisorCount, SetvertexBindingDivisorCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pVertexBindingDivisors").ToLocalChecked(), GetpVertexBindingDivisors, SetpVertexBindingDivisors, ctor);
  Nan::Set(target, Nan::New("VkPipelineVertexInputDivisorStateCreateInfoEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkPipelineVertexInputDivisorStateCreateInfoEXT::flush() {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = this;
  if (!(self->pVertexBindingDivisors.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pVertexBindingDivisors);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.vertexBindingDivisorCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'vertexBindingDivisorCount' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.pVertexBindingDivisors'");
      return false;
    }
    std::vector<VkVertexInputBindingDivisorDescriptionEXT>* data = self->vpVertexBindingDivisors;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkVertexInputBindingDivisorDescriptionEXT::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkVertexInputBindingDivisorDescriptionEXT]' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.pVertexBindingDivisors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkVertexInputBindingDivisorDescriptionEXT* result = Nan::ObjectWrap::Unwrap<_VkVertexInputBindingDivisorDescriptionEXT>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pVertexBindingDivisors = data->data();
  }
  return true;
}

NAN_METHOD(_VkPipelineVertexInputDivisorStateCreateInfoEXT::New) {
  if (info.IsConstructCall()) {
    _VkPipelineVertexInputDivisorStateCreateInfoEXT* self = new _VkPipelineVertexInputDivisorStateCreateInfoEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("vertexBindingDivisorCount").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pVertexBindingDivisors").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkPipelineVertexInputDivisorStateCreateInfoEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::GetsType) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::SetsType) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// vertexBindingDivisorCount
NAN_GETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::GetvertexBindingDivisorCount) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.vertexBindingDivisorCount));
}NAN_SETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::SetvertexBindingDivisorCount) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.vertexBindingDivisorCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.vertexBindingDivisorCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pVertexBindingDivisors
NAN_GETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::GetpVertexBindingDivisors) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  if (self->pVertexBindingDivisors.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pVertexBindingDivisors);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkPipelineVertexInputDivisorStateCreateInfoEXT::SetpVertexBindingDivisors) {
  _VkPipelineVertexInputDivisorStateCreateInfoEXT *self = Nan::ObjectWrap::Unwrap<_VkPipelineVertexInputDivisorStateCreateInfoEXT>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pVertexBindingDivisors.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pVertexBindingDivisors.Reset();
      self->instance.pVertexBindingDivisors = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkVertexInputBindingDivisorDescriptionEXT]' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.pVertexBindingDivisors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pVertexBindingDivisors = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkVertexInputBindingDivisorDescriptionEXT]' for 'VkPipelineVertexInputDivisorStateCreateInfoEXT.pVertexBindingDivisors' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}