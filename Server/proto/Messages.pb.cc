// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Messages.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Messages.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Messages {

namespace {

const ::google::protobuf::Descriptor* PingRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PingRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* PingReply_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  PingReply_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* PingService_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_Messages_2eproto() {
  protobuf_AddDesc_Messages_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Messages.proto");
  GOOGLE_CHECK(file != NULL);
  PingRequest_descriptor_ = file->message_type(0);
  static const int PingRequest_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, text_),
  };
  PingRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PingRequest_descriptor_,
      PingRequest::default_instance_,
      PingRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PingRequest));
  PingReply_descriptor_ = file->message_type(1);
  static const int PingReply_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingReply, text_),
  };
  PingReply_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      PingReply_descriptor_,
      PingReply::default_instance_,
      PingReply_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingReply, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(PingReply, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(PingReply));
  PingService_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Messages_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PingRequest_descriptor_, &PingRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    PingReply_descriptor_, &PingReply::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Messages_2eproto() {
  delete PingRequest::default_instance_;
  delete PingRequest_reflection_;
  delete PingReply::default_instance_;
  delete PingReply_reflection_;
}

void protobuf_AddDesc_Messages_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\016Messages.proto\022\010Messages\"\033\n\013PingReques"
    "t\022\014\n\004text\030\001 \001(\t\"\031\n\tPingReply\022\014\n\004text\030\001 \001"
    "(\t2v\n\013PingService\0222\n\004Ping\022\025.Messages.Pin"
    "gRequest\032\023.Messages.PingReply\0223\n\005Ping2\022\025"
    ".Messages.PingRequest\032\023.Messages.PingRep"
    "lyB\003\200\001\001", 207);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Messages.proto", &protobuf_RegisterTypes);
  PingRequest::default_instance_ = new PingRequest();
  PingReply::default_instance_ = new PingReply();
  PingRequest::default_instance_->InitAsDefaultInstance();
  PingReply::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Messages_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Messages_2eproto {
  StaticDescriptorInitializer_Messages_2eproto() {
    protobuf_AddDesc_Messages_2eproto();
  }
} static_descriptor_initializer_Messages_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int PingRequest::kTextFieldNumber;
#endif  // !_MSC_VER

PingRequest::PingRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Messages.PingRequest)
}

void PingRequest::InitAsDefaultInstance() {
}

PingRequest::PingRequest(const PingRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Messages.PingRequest)
}

void PingRequest::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PingRequest::~PingRequest() {
  // @@protoc_insertion_point(destructor:Messages.PingRequest)
  SharedDtor();
}

void PingRequest::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void PingRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PingRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingRequest_descriptor_;
}

const PingRequest& PingRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();
  return *default_instance_;
}

PingRequest* PingRequest::default_instance_ = NULL;

PingRequest* PingRequest::New() const {
  return new PingRequest;
}

void PingRequest::Clear() {
  if (has_text()) {
    if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      text_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PingRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Messages.PingRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string text = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "text");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Messages.PingRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Messages.PingRequest)
  return false;
#undef DO_
}

void PingRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Messages.PingRequest)
  // optional string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Messages.PingRequest)
}

::google::protobuf::uint8* PingRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Messages.PingRequest)
  // optional string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Messages.PingRequest)
  return target;
}

int PingRequest::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PingRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PingRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PingRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PingRequest::MergeFrom(const PingRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PingRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingRequest::CopyFrom(const PingRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingRequest::IsInitialized() const {

  return true;
}

void PingRequest::Swap(PingRequest* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PingRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PingRequest_descriptor_;
  metadata.reflection = PingRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int PingReply::kTextFieldNumber;
#endif  // !_MSC_VER

PingReply::PingReply()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Messages.PingReply)
}

void PingReply::InitAsDefaultInstance() {
}

PingReply::PingReply(const PingReply& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Messages.PingReply)
}

void PingReply::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

PingReply::~PingReply() {
  // @@protoc_insertion_point(destructor:Messages.PingReply)
  SharedDtor();
}

void PingReply::SharedDtor() {
  if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete text_;
  }
  if (this != default_instance_) {
  }
}

void PingReply::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* PingReply::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingReply_descriptor_;
}

const PingReply& PingReply::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Messages_2eproto();
  return *default_instance_;
}

PingReply* PingReply::default_instance_ = NULL;

PingReply* PingReply::New() const {
  return new PingReply;
}

void PingReply::Clear() {
  if (has_text()) {
    if (text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      text_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool PingReply::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Messages.PingReply)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string text = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->text().data(), this->text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "text");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Messages.PingReply)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Messages.PingReply)
  return false;
#undef DO_
}

void PingReply::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Messages.PingReply)
  // optional string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->text(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:Messages.PingReply)
}

::google::protobuf::uint8* PingReply::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Messages.PingReply)
  // optional string text = 1;
  if (has_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->text().data(), this->text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->text(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Messages.PingReply)
  return target;
}

int PingReply::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string text = 1;
    if (has_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->text());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PingReply::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const PingReply* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const PingReply*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void PingReply::MergeFrom(const PingReply& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_text()) {
      set_text(from.text());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void PingReply::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PingReply::CopyFrom(const PingReply& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingReply::IsInitialized() const {

  return true;
}

void PingReply::Swap(PingReply* other) {
  if (other != this) {
    std::swap(text_, other->text_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata PingReply::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = PingReply_descriptor_;
  metadata.reflection = PingReply_reflection_;
  return metadata;
}


// ===================================================================

PingService::~PingService() {}

const ::google::protobuf::ServiceDescriptor* PingService::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingService_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* PingService::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return PingService_descriptor_;
}

void PingService::Ping(::google::protobuf::RpcController* controller,
                         const ::Messages::PingRequest*,
                         ::Messages::PingReply*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Ping() not implemented.");
  done->Run();
}

void PingService::Ping2(::google::protobuf::RpcController* controller,
                         const ::Messages::PingRequest*,
                         ::Messages::PingReply*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method Ping2() not implemented.");
  done->Run();
}

void PingService::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), PingService_descriptor_);
  switch(method->index()) {
    case 0:
      Ping(controller,
             ::google::protobuf::down_cast<const ::Messages::PingRequest*>(request),
             ::google::protobuf::down_cast< ::Messages::PingReply*>(response),
             done);
      break;
    case 1:
      Ping2(controller,
             ::google::protobuf::down_cast<const ::Messages::PingRequest*>(request),
             ::google::protobuf::down_cast< ::Messages::PingReply*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& PingService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::Messages::PingRequest::default_instance();
    case 1:
      return ::Messages::PingRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& PingService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::Messages::PingReply::default_instance();
    case 1:
      return ::Messages::PingReply::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

PingService_Stub::PingService_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
PingService_Stub::PingService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
PingService_Stub::~PingService_Stub() {
  if (owns_channel_) delete channel_;
}

void PingService_Stub::Ping(::google::protobuf::RpcController* controller,
                              const ::Messages::PingRequest* request,
                              ::Messages::PingReply* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}
void PingService_Stub::Ping2(::google::protobuf::RpcController* controller,
                              const ::Messages::PingRequest* request,
                              ::Messages::PingReply* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(1),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace Messages

// @@protoc_insertion_point(global_scope)
