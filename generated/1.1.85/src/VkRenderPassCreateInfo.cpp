/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkRenderPassCreateInfo.h"

Nan::Persistent<v8::FunctionTemplate> _VkRenderPassCreateInfo::constructor;

_VkRenderPassCreateInfo::_VkRenderPassCreateInfo() {
  instance.sType = VK_STRUCTURE_TYPE_RENDER_PASS_CREATE_INFO;
  vpAttachments = new std::vector<VkAttachmentDescription>;
  vpSubpasses = new std::vector<VkSubpassDescription>;
  vpDependencies = new std::vector<VkSubpassDependency>;
  
}

_VkRenderPassCreateInfo::~_VkRenderPassCreateInfo() {
  //printf("VkRenderPassCreateInfo deconstructed!!\n");
  
  
  
  
  vpAttachments->clear();
  delete vpAttachments;
  
  pAttachments.Reset();
  
  
  vpSubpasses->clear();
  delete vpSubpasses;
  
  pSubpasses.Reset();
  
  
  vpDependencies->clear();
  delete vpDependencies;
  
  pDependencies.Reset();
  
}

void _VkRenderPassCreateInfo::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkRenderPassCreateInfo::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkRenderPassCreateInfo").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("attachmentCount").ToLocalChecked(), GetattachmentCount, SetattachmentCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pAttachments").ToLocalChecked(), GetpAttachments, SetpAttachments, ctor);
  SetPrototypeAccessor(proto, Nan::New("subpassCount").ToLocalChecked(), GetsubpassCount, SetsubpassCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pSubpasses").ToLocalChecked(), GetpSubpasses, SetpSubpasses, ctor);
  SetPrototypeAccessor(proto, Nan::New("dependencyCount").ToLocalChecked(), GetdependencyCount, SetdependencyCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pDependencies").ToLocalChecked(), GetpDependencies, SetpDependencies, ctor);
  Nan::Set(target, Nan::New("VkRenderPassCreateInfo").ToLocalChecked(), ctor->GetFunction());
}

bool _VkRenderPassCreateInfo::flush() {
  _VkRenderPassCreateInfo *self = this;
  if (!(self->pAttachments.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pAttachments);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.attachmentCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'attachmentCount' for 'VkRenderPassCreateInfo.pAttachments'");
      return false;
    }
    std::vector<VkAttachmentDescription>* data = self->vpAttachments;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkAttachmentDescription::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription]' for 'VkRenderPassCreateInfo.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkAttachmentDescription* result = Nan::ObjectWrap::Unwrap<_VkAttachmentDescription>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pAttachments = data->data();
  }if (!(self->pSubpasses.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pSubpasses);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.subpassCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'subpassCount' for 'VkRenderPassCreateInfo.pSubpasses'");
      return false;
    }
    std::vector<VkSubpassDescription>* data = self->vpSubpasses;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSubpassDescription::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription]' for 'VkRenderPassCreateInfo.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSubpassDescription* result = Nan::ObjectWrap::Unwrap<_VkSubpassDescription>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pSubpasses = data->data();
  }if (!(self->pDependencies.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pDependencies);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.dependencyCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'dependencyCount' for 'VkRenderPassCreateInfo.pDependencies'");
      return false;
    }
    std::vector<VkSubpassDependency>* data = self->vpDependencies;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkSubpassDependency::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency]' for 'VkRenderPassCreateInfo.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkSubpassDependency* result = Nan::ObjectWrap::Unwrap<_VkSubpassDependency>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pDependencies = data->data();
  }
  return true;
}

NAN_METHOD(_VkRenderPassCreateInfo::New) {
  if (info.IsConstructCall()) {
    _VkRenderPassCreateInfo* self = new _VkRenderPassCreateInfo();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("attachmentCount").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("pAttachments").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("subpassCount").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("pSubpasses").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("dependencyCount").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("pDependencies").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkRenderPassCreateInfo constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkRenderPassCreateInfo::GetsType) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkRenderPassCreateInfo::SetsType) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkRenderPassCreateInfo::Getflags) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkRenderPassCreateInfo::Setflags) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkRenderPassCreateFlags>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// attachmentCount
NAN_GETTER(_VkRenderPassCreateInfo::GetattachmentCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.attachmentCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetattachmentCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.attachmentCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo.attachmentCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pAttachments
NAN_GETTER(_VkRenderPassCreateInfo::GetpAttachments) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pAttachments.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pAttachments);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpAttachments) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pAttachments.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pAttachments.Reset();
      self->instance.pAttachments = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription]' for 'VkRenderPassCreateInfo.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pAttachments = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkAttachmentDescription]' for 'VkRenderPassCreateInfo.pAttachments' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// subpassCount
NAN_GETTER(_VkRenderPassCreateInfo::GetsubpassCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.subpassCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetsubpassCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.subpassCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo.subpassCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pSubpasses
NAN_GETTER(_VkRenderPassCreateInfo::GetpSubpasses) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pSubpasses.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pSubpasses);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpSubpasses) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pSubpasses.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pSubpasses.Reset();
      self->instance.pSubpasses = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription]' for 'VkRenderPassCreateInfo.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pSubpasses = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDescription]' for 'VkRenderPassCreateInfo.pSubpasses' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// dependencyCount
NAN_GETTER(_VkRenderPassCreateInfo::GetdependencyCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dependencyCount));
}NAN_SETTER(_VkRenderPassCreateInfo::SetdependencyCount) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (value->IsNumber()) {
    self->instance.dependencyCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkRenderPassCreateInfo.dependencyCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pDependencies
NAN_GETTER(_VkRenderPassCreateInfo::GetpDependencies) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  if (self->pDependencies.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pDependencies);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkRenderPassCreateInfo::SetpDependencies) {
  _VkRenderPassCreateInfo *self = Nan::ObjectWrap::Unwrap<_VkRenderPassCreateInfo>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pDependencies.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pDependencies.Reset();
      self->instance.pDependencies = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency]' for 'VkRenderPassCreateInfo.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pDependencies = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkSubpassDependency]' for 'VkRenderPassCreateInfo.pDependencies' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}