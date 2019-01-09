/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkRaytracingPipelineCreateInfoNVX.h"

Nan::Persistent<v8::FunctionTemplate> _VkRaytracingPipelineCreateInfoNVX::constructor;

_VkRaytracingPipelineCreateInfoNVX::_VkRaytracingPipelineCreateInfoNVX() {
  instance.sType = VK_STRUCTURE_TYPE_RAYTRACING_PIPELINE_CREATE_INFO_NVX;
  vpStages = new std::vector<VkPipelineShaderStageCreateInfo>;
  
}

_VkRaytracingPipelineCreateInfoNVX::~_VkRaytracingPipelineCreateInfoNVX() {
  //printf("VkRaytracingPipelineCreateInfoNVX deconstructed!!\n");
  
  
  
  
  vpStages->clear();
  delete vpStages;
  
  pStages.Reset();
  
  pGroupNumbers.Reset();
  
  
  
  
  
}

void _VkRaytracingPipelineCreateInfoNVX::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRaytracingPipelineCreateInfoNVX::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRaytracingPipelineCreateInfoNVX").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("stageCount").ToLocalChecked(), GetstageCount, SetstageCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pStages").ToLocalChecked(), GetpStages, SetpStages, ctor);
  SetPrototypeAccessor(proto, Nan::New("pGroupNumbers").ToLocalChecked(), GetpGroupNumbers, SetpGroupNumbers, ctor);
  SetPrototypeAccessor(proto, Nan::New("maxRecursionDepth").ToLocalChecked(), GetmaxRecursionDepth, SetmaxRecursionDepth, ctor);
  SetPrototypeAccessor(proto, Nan::New("layout").ToLocalChecked(), Getlayout, Setlayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineHandle").ToLocalChecked(), GetbasePipelineHandle, SetbasePipelineHandle, ctor);
  SetPrototypeAccessor(proto, Nan::New("basePipelineIndex").ToLocalChecked(), GetbasePipelineIndex, SetbasePipelineIndex, ctor);
  Nan::Set(target, Nan::New("VkRaytracingPipelineCreateInfoNVX").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRaytracingPipelineCreateInfoNVX::flush() {
  _VkRaytracingPipelineCreateInfoNVX *self = this;
  if (!(self->pStages.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pStages);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.stageCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'stageCount' for 'VkRaytracingPipelineCreateInfoNVX.pStages'");
      return false;
    }
    std::vector<VkPipelineShaderStageCreateInfo>* data = self->vpStages;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkPipelineShaderStageCreateInfo::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineShaderStageCreateInfo]' for 'VkRaytracingPipelineCreateInfoNVX.pStages' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkPipelineShaderStageCreateInfo* result = Nan::ObjectWrap::Unwrap<_VkPipelineShaderStageCreateInfo>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pStages = data->data();
  }
  return true;
}

NAN_METHOD(_VkRaytracingPipelineCreateInfoNVX::New) {
  if (info.IsConstructCall()) {
    _VkRaytracingPipelineCreateInfoNVX* self = new _VkRaytracingPipelineCreateInfoNVX();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("stageCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pStages").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pGroupNumbers").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("maxRecursionDepth").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("layout").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("basePipelineHandle").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("basePipelineIndex").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRaytracingPipelineCreateInfoNVX constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetsType) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetsType) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRaytracingPipelineCreateInfoNVX.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::Getflags) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::Setflags) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkPipelineCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRaytracingPipelineCreateInfoNVX.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// stageCount
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetstageCount) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.stageCount));
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetstageCount) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.stageCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRaytracingPipelineCreateInfoNVX.stageCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pStages
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetpStages) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (self->pStages.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pStages);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetpStages) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pStages.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pStages.Reset();
      self->instance.pStages = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineShaderStageCreateInfo]' for 'VkRaytracingPipelineCreateInfoNVX.pStages' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pStages = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineShaderStageCreateInfo]' for 'VkRaytracingPipelineCreateInfoNVX.pStages' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pGroupNumbers
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetpGroupNumbers) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (self->pGroupNumbers.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pGroupNumbers);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetpGroupNumbers) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  
    // js
    if (value->IsArrayBufferView()) {
      if (value->IsUint32Array()) {
        self->pGroupNumbers.Reset<v8::Array>(value.As<v8::Array>());
      } else {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkRaytracingPipelineCreateInfoNVX.pGroupNumbers' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return;
      }
    } else if (value->IsNull()) {
      self->pGroupNumbers.Reset();
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Uint32Array' for 'VkRaytracingPipelineCreateInfoNVX.pGroupNumbers' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  
  // vulkan
  if (value->IsArrayBufferView()) {
    self->instance.pGroupNumbers = getTypedArrayData<uint32_t>(Nan::To<v8::Object>(value).ToLocalChecked(), nullptr);
  } else {
    self->instance.pGroupNumbers = nullptr;
  }
}// maxRecursionDepth
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetmaxRecursionDepth) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.maxRecursionDepth));
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetmaxRecursionDepth) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.maxRecursionDepth = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRaytracingPipelineCreateInfoNVX.maxRecursionDepth' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// layout
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::Getlayout) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (self->layout.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->layout);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::Setlayout) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipelineLayout::constructor)->HasInstance(obj)) {
      self->layout.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipelineLayout* inst = Nan::ObjectWrap::Unwrap<_VkPipelineLayout>(obj);
      ;
      self->instance.layout = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkRaytracingPipelineCreateInfoNVX.layout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->layout.Reset();
    self->instance.layout = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipelineLayout]' for 'VkRaytracingPipelineCreateInfoNVX.layout' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// basePipelineHandle
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetbasePipelineHandle) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (self->basePipelineHandle.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->basePipelineHandle);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetbasePipelineHandle) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  // js
  if (!value->IsNull()) {
    v8::Local<v8::Object> obj = Nan::To<v8::Object>(value).ToLocalChecked();
    if (Nan::New(_VkPipeline::constructor)->HasInstance(obj)) {
      self->basePipelineHandle.Reset<v8::Object>(value.As<v8::Object>());
      _VkPipeline* inst = Nan::ObjectWrap::Unwrap<_VkPipeline>(obj);
      ;
      self->instance.basePipelineHandle = inst->instance;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipeline]' for 'VkRaytracingPipelineCreateInfoNVX.basePipelineHandle' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  } else if (value->IsNull()) {
    self->basePipelineHandle.Reset();
    self->instance.basePipelineHandle = VK_NULL_HANDLE;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkPipeline]' for 'VkRaytracingPipelineCreateInfoNVX.basePipelineHandle' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// basePipelineIndex
NAN_GETTER(_VkRaytracingPipelineCreateInfoNVX::GetbasePipelineIndex) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.basePipelineIndex));
}NAN_SETTER(_VkRaytracingPipelineCreateInfoNVX::SetbasePipelineIndex) {
  _VkRaytracingPipelineCreateInfoNVX *self = Nan::ObjectWrap::Unwrap<_VkRaytracingPipelineCreateInfoNVX>(info.This());
  if (value->IsNumber()) {
    self->instance.basePipelineIndex = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRaytracingPipelineCreateInfoNVX.basePipelineIndex' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}