/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY nvk v0.1.4
 */
#include "VkImage.h"

Nan::Persistent<v8::FunctionTemplate> _VkImage::constructor;

_VkImage::_VkImage() {}
_VkImage::~_VkImage() {}

void _VkImage::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImage::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImage").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkImage").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImage::New) {
  _VkImage* self = new _VkImage();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
