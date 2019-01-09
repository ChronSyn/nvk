/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "utils.h"
#include "index.h"
#include "VkMemoryHeap.h"

Nan::Persistent<v8::FunctionTemplate> _VkMemoryHeap::constructor;

_VkMemoryHeap::_VkMemoryHeap() {
  
  
}

_VkMemoryHeap::~_VkMemoryHeap() {
  //printf("VkMemoryHeap deconstructed!!\n");
  
  
  
}

void _VkMemoryHeap::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkMemoryHeap::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkMemoryHeap").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, nullptr, ctor);
  SetPrototypeAccessor(proto, Nan::New("flags").ToLocalChecked(), Getflags, nullptr, ctor);
  Nan::Set(target, Nan::New("VkMemoryHeap").ToLocalChecked(), ctor->GetFunction());
}

bool _VkMemoryHeap::flush() {
  _VkMemoryHeap *self = this;
  
  return true;
}

NAN_METHOD(_VkMemoryHeap::New) {
  if (info.IsConstructCall()) {
    _VkMemoryHeap* self = new _VkMemoryHeap();
    self->Wrap(info.Holder());
    
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkMemoryHeap constructor cannot be invoked without 'new'");
  }
};

// size
NAN_GETTER(_VkMemoryHeap::Getsize) {
  _VkMemoryHeap *self = Nan::ObjectWrap::Unwrap<_VkMemoryHeap>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}// flags
NAN_GETTER(_VkMemoryHeap::Getflags) {
  _VkMemoryHeap *self = Nan::ObjectWrap::Unwrap<_VkMemoryHeap>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.flags));
}