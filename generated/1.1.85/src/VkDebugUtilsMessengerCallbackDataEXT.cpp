/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkDebugUtilsMessengerCallbackDataEXT.h"

Nan::Persistent<v8::FunctionTemplate> _VkDebugUtilsMessengerCallbackDataEXT::constructor;

_VkDebugUtilsMessengerCallbackDataEXT::_VkDebugUtilsMessengerCallbackDataEXT() {
  instance.sType = VK_STRUCTURE_TYPE_DEBUG_UTILS_MESSENGER_CALLBACK_DATA_EXT;
  vpQueueLabels = new std::vector<VkDebugUtilsLabelEXT>;
  vpCmdBufLabels = new std::vector<VkDebugUtilsLabelEXT>;
  vpObjects = new std::vector<VkDebugUtilsObjectNameInfoEXT>;
  
}

_VkDebugUtilsMessengerCallbackDataEXT::~_VkDebugUtilsMessengerCallbackDataEXT() {
  //printf("VkDebugUtilsMessengerCallbackDataEXT deconstructed!!\n");
  
  
  
  pMessageIdName.Reset();
  
  
  pMessage.Reset();
  
  
  vpQueueLabels->clear();
  delete vpQueueLabels;
  
  pQueueLabels.Reset();
  
  
  vpCmdBufLabels->clear();
  delete vpCmdBufLabels;
  
  pCmdBufLabels.Reset();
  
  
  vpObjects->clear();
  delete vpObjects;
  
  pObjects.Reset();
  
}

void _VkDebugUtilsMessengerCallbackDataEXT::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkDebugUtilsMessengerCallbackDataEXT::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkDebugUtilsMessengerCallbackDataEXT").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, Setflags, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMessageIdName").ToLocalChecked(), GetpMessageIdName, SetpMessageIdName, ctor);
  SetPrototypeAccessor(proto, Nan::New("messageIdNumber").ToLocalChecked(), GetmessageIdNumber, SetmessageIdNumber, ctor);
  SetPrototypeAccessor(proto, Nan::New("pMessage").ToLocalChecked(), GetpMessage, SetpMessage, ctor);
  SetPrototypeAccessor(proto, Nan::New("queueLabelCount").ToLocalChecked(), GetqueueLabelCount, SetqueueLabelCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pQueueLabels").ToLocalChecked(), GetpQueueLabels, SetpQueueLabels, ctor);
  SetPrototypeAccessor(proto, Nan::New("cmdBufLabelCount").ToLocalChecked(), GetcmdBufLabelCount, SetcmdBufLabelCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pCmdBufLabels").ToLocalChecked(), GetpCmdBufLabels, SetpCmdBufLabels, ctor);
  SetPrototypeAccessor(proto, Nan::New("objectCount").ToLocalChecked(), GetobjectCount, SetobjectCount, ctor);
  SetPrototypeAccessor(proto, Nan::New("pObjects").ToLocalChecked(), GetpObjects, SetpObjects, ctor);
  Nan::Set(target, Nan::New("VkDebugUtilsMessengerCallbackDataEXT").ToLocalChecked(), ctor->GetFunction());
}

bool _VkDebugUtilsMessengerCallbackDataEXT::flush() {
  _VkDebugUtilsMessengerCallbackDataEXT *self = this;
  if (!(self->pQueueLabels.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pQueueLabels);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.queueLabelCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'queueLabelCount' for 'VkDebugUtilsMessengerCallbackDataEXT.pQueueLabels'");
      return false;
    }
    std::vector<VkDebugUtilsLabelEXT>* data = self->vpQueueLabels;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDebugUtilsLabelEXT::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pQueueLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDebugUtilsLabelEXT* result = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pQueueLabels = data->data();
  }if (!(self->pCmdBufLabels.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pCmdBufLabels);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.cmdBufLabelCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'cmdBufLabelCount' for 'VkDebugUtilsMessengerCallbackDataEXT.pCmdBufLabels'");
      return false;
    }
    std::vector<VkDebugUtilsLabelEXT>* data = self->vpCmdBufLabels;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDebugUtilsLabelEXT::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pCmdBufLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDebugUtilsLabelEXT* result = Nan::ObjectWrap::Unwrap<_VkDebugUtilsLabelEXT>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pCmdBufLabels = data->data();
  }if (!(self->pObjects.IsEmpty())) {
    v8::Local<v8::Value> value = Nan::New(self->pObjects);
    
    v8::Local<v8::Array> array = v8::Local<v8::Array>::Cast(value);
    // validate length
    if (array->Length() != self->instance.objectCount) {
      Nan::ThrowRangeError("Invalid array length, expected array length of 'objectCount' for 'VkDebugUtilsMessengerCallbackDataEXT.pObjects'");
      return false;
    }
    std::vector<VkDebugUtilsObjectNameInfoEXT>* data = self->vpObjects;
    data->clear();
    for (unsigned int ii = 0; ii < array->Length(); ++ii) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(Nan::Get(array, ii).ToLocalChecked()).ToLocalChecked();
      if (!(Nan::New(_VkDebugUtilsObjectNameInfoEXT::constructor)->HasInstance(obj))) {
        
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsObjectNameInfoEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pObjects' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
        return false;
      }
      _VkDebugUtilsObjectNameInfoEXT* result = Nan::ObjectWrap::Unwrap<_VkDebugUtilsObjectNameInfoEXT>(obj);
      if (!result->flush()) return false;
      data->push_back(result->instance);
    };
    self->instance.pObjects = data->data();
  }
  return true;
}

NAN_METHOD(_VkDebugUtilsMessengerCallbackDataEXT::New) {
  if (info.IsConstructCall()) {
    _VkDebugUtilsMessengerCallbackDataEXT* self = new _VkDebugUtilsMessengerCallbackDataEXT();
    self->Wrap(info.Holder());
    
    if (info[0]->IsObject()) {
      v8::Local<v8::Object> obj = Nan::To<v8::Object>(info[0]).ToLocalChecked();
      v8::Local<v8::String> sAccess0 = Nan::New("sType").ToLocalChecked();
      v8::Local<v8::String> sAccess2 = Nan::New("flags").ToLocalChecked();
      v8::Local<v8::String> sAccess3 = Nan::New("pMessageIdName").ToLocalChecked();
      v8::Local<v8::String> sAccess4 = Nan::New("messageIdNumber").ToLocalChecked();
      v8::Local<v8::String> sAccess5 = Nan::New("pMessage").ToLocalChecked();
      v8::Local<v8::String> sAccess6 = Nan::New("queueLabelCount").ToLocalChecked();
      v8::Local<v8::String> sAccess7 = Nan::New("pQueueLabels").ToLocalChecked();
      v8::Local<v8::String> sAccess8 = Nan::New("cmdBufLabelCount").ToLocalChecked();
      v8::Local<v8::String> sAccess9 = Nan::New("pCmdBufLabels").ToLocalChecked();
      v8::Local<v8::String> sAccess10 = Nan::New("objectCount").ToLocalChecked();
      v8::Local<v8::String> sAccess11 = Nan::New("pObjects").ToLocalChecked();
      if (obj->Has(sAccess0)) info.This()->Set(sAccess0, obj->Get(sAccess0));
      if (obj->Has(sAccess2)) info.This()->Set(sAccess2, obj->Get(sAccess2));
      if (obj->Has(sAccess3)) info.This()->Set(sAccess3, obj->Get(sAccess3));
      if (obj->Has(sAccess4)) info.This()->Set(sAccess4, obj->Get(sAccess4));
      if (obj->Has(sAccess5)) info.This()->Set(sAccess5, obj->Get(sAccess5));
      if (obj->Has(sAccess6)) info.This()->Set(sAccess6, obj->Get(sAccess6));
      if (obj->Has(sAccess7)) info.This()->Set(sAccess7, obj->Get(sAccess7));
      if (obj->Has(sAccess8)) info.This()->Set(sAccess8, obj->Get(sAccess8));
      if (obj->Has(sAccess9)) info.This()->Set(sAccess9, obj->Get(sAccess9));
      if (obj->Has(sAccess10)) info.This()->Set(sAccess10, obj->Get(sAccess10));
      if (obj->Has(sAccess11)) info.This()->Set(sAccess11, obj->Get(sAccess11));
      
    }
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkDebugUtilsMessengerCallbackDataEXT constructor cannot be invoked without 'new'");
  }
};

// sType
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetsType) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetsType) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.sType = static_cast<VkStructureType>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.sType' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// flags
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::Getflags) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::Setflags) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.flags = static_cast<VkDebugUtilsMessengerCallbackDataFlagsEXT>(Nan::To<int32_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.flags' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pMessageIdName
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetpMessageIdName) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (self->pMessageIdName.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pMessageIdName);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetpMessageIdName) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pMessageIdName = str;
    // free previous
    if (self->instance.pMessageIdName) {
      delete[] self->instance.pMessageIdName;
    }
    self->instance.pMessageIdName = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pMessageIdName = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'String' for 'VkDebugUtilsMessengerCallbackDataEXT.pMessageIdName' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// messageIdNumber
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetmessageIdNumber) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.messageIdNumber));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetmessageIdNumber) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.messageIdNumber = static_cast<int32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.messageIdNumber' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pMessage
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetpMessage) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (self->pMessage.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::String> str = Nan::New(self->pMessage);
    info.GetReturnValue().Set(str);
  }
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetpMessage) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsString()) {
    Nan::Persistent<v8::String, v8::CopyablePersistentTraits<v8::String>> str(Nan::To<v8::String>(value).ToLocalChecked());
    self->pMessage = str;
    // free previous
    if (self->instance.pMessage) {
      delete[] self->instance.pMessage;
    }
    self->instance.pMessage = copyV8String(value);
  } else if (value->IsNull()) {
    self->instance.pMessage = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'String' for 'VkDebugUtilsMessengerCallbackDataEXT.pMessage' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// queueLabelCount
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetqueueLabelCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.queueLabelCount));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetqueueLabelCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.queueLabelCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.queueLabelCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pQueueLabels
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetpQueueLabels) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (self->pQueueLabels.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pQueueLabels);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetpQueueLabels) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pQueueLabels.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pQueueLabels.Reset();
      self->instance.pQueueLabels = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pQueueLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pQueueLabels = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pQueueLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// cmdBufLabelCount
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetcmdBufLabelCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.cmdBufLabelCount));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetcmdBufLabelCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.cmdBufLabelCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.cmdBufLabelCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pCmdBufLabels
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetpCmdBufLabels) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (self->pCmdBufLabels.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pCmdBufLabels);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetpCmdBufLabels) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pCmdBufLabels.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pCmdBufLabels.Reset();
      self->instance.pCmdBufLabels = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pCmdBufLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pCmdBufLabels = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsLabelEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pCmdBufLabels' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// objectCount
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetobjectCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.objectCount));
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetobjectCount) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (value->IsNumber()) {
    self->instance.objectCount = static_cast<uint32_t>(Nan::To<int64_t>(value).FromMaybe(0));
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected 'Number' for 'VkDebugUtilsMessengerCallbackDataEXT.objectCount' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}// pObjects
NAN_GETTER(_VkDebugUtilsMessengerCallbackDataEXT::GetpObjects) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  if (self->pObjects.IsEmpty()) {
    info.GetReturnValue().SetNull();
  } else {
    v8::Local<v8::Object> obj = Nan::New(self->pObjects);
    info.GetReturnValue().Set(obj);
  }
}NAN_SETTER(_VkDebugUtilsMessengerCallbackDataEXT::SetpObjects) {
  _VkDebugUtilsMessengerCallbackDataEXT *self = Nan::ObjectWrap::Unwrap<_VkDebugUtilsMessengerCallbackDataEXT>(info.This());
  
    // js
    if (value->IsArray()) {
      self->pObjects.Reset<v8::Array>(value.As<v8::Array>());
    } else if (value->IsNull()) {
      self->pObjects.Reset();
      self->instance.pObjects = nullptr;
    } else {
      
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsObjectNameInfoEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pObjects' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
      return;
    }
  
  // vulkan
  if (value->IsArray()) {
    
  } else if (value->IsNull()) {
    self->instance.pObjects = nullptr;
  } else {
    
    std::string details = getV8ObjectDetails(value);
    if (details[0] == '#') details = "[object " + (details.substr(2, details.length() - 2 - 1)) + "]";
    std::string msg = "Expected '[object VkDebugUtilsObjectNameInfoEXT]' for 'VkDebugUtilsMessengerCallbackDataEXT.pObjects' but got '" + details + "'";
    Nan::ThrowTypeError(msg.c_str());
    return;
  }
}