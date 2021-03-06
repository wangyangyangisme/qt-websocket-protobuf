// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Information.RequestMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Information.RequestMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

namespace {

const ::google::protobuf::Descriptor* RequestMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RequestMessage_reflection_ = NULL;
const ::google::protobuf::Descriptor* RequestMessage_ParamsEntry_descriptor_ = NULL;
const ::google::protobuf::Descriptor* ErrorStatus_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ErrorStatus_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Information_2eRequestMessage_2eproto() {
  protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Information.RequestMessage.proto");
  GOOGLE_CHECK(file != NULL);
  RequestMessage_descriptor_ = file->message_type(0);
  static const int RequestMessage_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, service_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, format_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, token_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, params_),
  };
  RequestMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RequestMessage_descriptor_,
      RequestMessage::default_instance_,
      RequestMessage_offsets_,
      -1,
      -1,
      -1,
      sizeof(RequestMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RequestMessage, _is_default_instance_));
  RequestMessage_ParamsEntry_descriptor_ = RequestMessage_descriptor_->nested_type(0);
  ErrorStatus_descriptor_ = file->message_type(1);
  static const int ErrorStatus_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorStatus, message_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorStatus, details_),
  };
  ErrorStatus_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ErrorStatus_descriptor_,
      ErrorStatus::default_instance_,
      ErrorStatus_offsets_,
      -1,
      -1,
      -1,
      sizeof(ErrorStatus),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorStatus, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ErrorStatus, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Information_2eRequestMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RequestMessage_descriptor_, &RequestMessage::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
        RequestMessage_ParamsEntry_descriptor_,
        ::google::protobuf::internal::MapEntry<
            ::std::string,
            ::google::protobuf::Any,
            ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
            ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
            0>::CreateDefaultInstance(
                RequestMessage_ParamsEntry_descriptor_));
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ErrorStatus_descriptor_, &ErrorStatus::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Information_2eRequestMessage_2eproto() {
  delete RequestMessage::default_instance_;
  delete RequestMessage_reflection_;
  delete ErrorStatus::default_instance_;
  delete ErrorStatus_reflection_;
}

void protobuf_AddDesc_Information_2eRequestMessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::protobuf_AddDesc_google_2fprotobuf_2fany_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n Information.RequestMessage.proto\022\010tuto"
    "rial\032\031google/protobuf/any.proto\"\273\001\n\016Requ"
    "estMessage\022\017\n\007service\030\001 \001(\t\022\016\n\006format\030\002 "
    "\001(\t\022\r\n\005token\030\003 \001(\t\0224\n\006params\030\004 \003(\0132$.tut"
    "orial.RequestMessage.ParamsEntry\032C\n\013Para"
    "msEntry\022\013\n\003key\030\001 \001(\t\022#\n\005value\030\002 \001(\0132\024.go"
    "ogle.protobuf.Any:\0028\001\"E\n\013ErrorStatus\022\017\n\007"
    "message\030\001 \001(\t\022%\n\007details\030\002 \001(\0132\024.google."
    "protobuf.Anyb\006proto3", 340);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Information.RequestMessage.proto", &protobuf_RegisterTypes);
  RequestMessage::default_instance_ = new RequestMessage();
  ErrorStatus::default_instance_ = new ErrorStatus();
  RequestMessage::default_instance_->InitAsDefaultInstance();
  ErrorStatus::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Information_2eRequestMessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Information_2eRequestMessage_2eproto {
  StaticDescriptorInitializer_Information_2eRequestMessage_2eproto() {
    protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  }
} static_descriptor_initializer_Information_2eRequestMessage_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RequestMessage::kServiceFieldNumber;
const int RequestMessage::kFormatFieldNumber;
const int RequestMessage::kTokenFieldNumber;
const int RequestMessage::kParamsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RequestMessage::RequestMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.RequestMessage)
}

void RequestMessage::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

RequestMessage::RequestMessage(const RequestMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tutorial.RequestMessage)
}

void RequestMessage::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  service_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  token_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  params_.SetAssignDescriptorCallback(
      protobuf_AssignDescriptorsOnce);
  params_.SetEntryDescriptor(
      &::tutorial::RequestMessage_ParamsEntry_descriptor_);
}

RequestMessage::~RequestMessage() {
  // @@protoc_insertion_point(destructor:tutorial.RequestMessage)
  SharedDtor();
}

void RequestMessage::SharedDtor() {
  service_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  token_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RequestMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RequestMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RequestMessage_descriptor_;
}

const RequestMessage& RequestMessage::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  return *default_instance_;
}

RequestMessage* RequestMessage::default_instance_ = NULL;

RequestMessage* RequestMessage::New(::google::protobuf::Arena* arena) const {
  RequestMessage* n = new RequestMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RequestMessage::Clear() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  params_.Clear();
}

bool RequestMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.RequestMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string service = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->service().data(), this->service().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.RequestMessage.service"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_format;
        break;
      }

      // optional string format = 2;
      case 2: {
        if (tag == 18) {
         parse_format:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_format()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->format().data(), this->format().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.RequestMessage.format"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_token;
        break;
      }

      // optional string token = 3;
      case 3: {
        if (tag == 26) {
         parse_token:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_token()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->token().data(), this->token().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.RequestMessage.token"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_params;
        break;
      }

      // map<string, .google.protobuf.Any> params = 4;
      case 4: {
        if (tag == 34) {
         parse_params:
          DO_(input->IncrementRecursionDepth());
         parse_loop_params:
          ::google::protobuf::scoped_ptr<RequestMessage_ParamsEntry> entry(params_.NewEntry());
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
              input, entry.get()));
          (*mutable_params())[entry->key()].Swap(entry->mutable_value());
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            entry->key().data(), entry->key().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.RequestMessage.ParamsEntry.key"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_params;
        input->UnsafeDecrementRecursionDepth();
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.RequestMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.RequestMessage)
  return false;
#undef DO_
}

void RequestMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.RequestMessage)
  // optional string service = 1;
  if (this->service().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service().data(), this->service().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.service");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service(), output);
  }

  // optional string format = 2;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), this->format().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.format");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->format(), output);
  }

  // optional string token = 3;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.token");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->token(), output);
  }

  // map<string, .google.protobuf.Any> params = 4;
  {
    ::google::protobuf::scoped_ptr<RequestMessage_ParamsEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
        it = this->params().begin();
        it != this->params().end(); ++it) {
      entry.reset(params_.NewEntryWrapper(it->first, it->second));
      ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
          4, *entry, output);
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        it->first.data(), it->first.length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "tutorial.RequestMessage.ParamsEntry.key");
    }
  }

  // @@protoc_insertion_point(serialize_end:tutorial.RequestMessage)
}

::google::protobuf::uint8* RequestMessage::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.RequestMessage)
  // optional string service = 1;
  if (this->service().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service().data(), this->service().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.service");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service(), target);
  }

  // optional string format = 2;
  if (this->format().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->format().data(), this->format().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.format");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->format(), target);
  }

  // optional string token = 3;
  if (this->token().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->token().data(), this->token().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.RequestMessage.token");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->token(), target);
  }

  // map<string, .google.protobuf.Any> params = 4;
  {
    ::google::protobuf::scoped_ptr<RequestMessage_ParamsEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
        it = this->params().begin();
        it != this->params().end(); ++it) {
      entry.reset(params_.NewEntryWrapper(it->first, it->second));
      target = ::google::protobuf::internal::WireFormatLite::
          WriteMessageNoVirtualToArray(
              4, *entry, target);
      ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        it->first.data(), it->first.length(),
        ::google::protobuf::internal::WireFormatLite::SERIALIZE,
        "tutorial.RequestMessage.ParamsEntry.key");
    }
  }

  // @@protoc_insertion_point(serialize_to_array_end:tutorial.RequestMessage)
  return target;
}

int RequestMessage::ByteSize() const {
  int total_size = 0;

  // optional string service = 1;
  if (this->service().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->service());
  }

  // optional string format = 2;
  if (this->format().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->format());
  }

  // optional string token = 3;
  if (this->token().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->token());
  }

  // map<string, .google.protobuf.Any> params = 4;
  total_size += 1 * this->params_size();
  {
    ::google::protobuf::scoped_ptr<RequestMessage_ParamsEntry> entry;
    for (::google::protobuf::Map< ::std::string, ::google::protobuf::Any >::const_iterator
        it = this->params().begin();
        it != this->params().end(); ++it) {
      entry.reset(params_.NewEntryWrapper(it->first, it->second));
      total_size += ::google::protobuf::internal::WireFormatLite::
          MessageSizeNoVirtual(*entry);
    }
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RequestMessage::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const RequestMessage* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RequestMessage>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RequestMessage::MergeFrom(const RequestMessage& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  params_.MergeFrom(from.params_);
  if (from.service().size() > 0) {

    service_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_);
  }
  if (from.format().size() > 0) {

    format_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.format_);
  }
  if (from.token().size() > 0) {

    token_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.token_);
  }
}

void RequestMessage::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RequestMessage::CopyFrom(const RequestMessage& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequestMessage::IsInitialized() const {

  return true;
}

void RequestMessage::Swap(RequestMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RequestMessage::InternalSwap(RequestMessage* other) {
  service_.Swap(&other->service_);
  format_.Swap(&other->format_);
  token_.Swap(&other->token_);
  params_.Swap(&other->params_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RequestMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RequestMessage_descriptor_;
  metadata.reflection = RequestMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RequestMessage

// optional string service = 1;
void RequestMessage::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RequestMessage::service() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.service)
  return service_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.service)
}
 void RequestMessage::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.service)
}
 void RequestMessage::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.service)
}
 ::std::string* RequestMessage::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RequestMessage::release_service() {
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.service)
}

// optional string format = 2;
void RequestMessage::clear_format() {
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RequestMessage::format() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.format)
  return format_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_format(const ::std::string& value) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.format)
}
 void RequestMessage::set_format(const char* value) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.format)
}
 void RequestMessage::set_format(const char* value, size_t size) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.format)
}
 ::std::string* RequestMessage::mutable_format() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.format)
  return format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RequestMessage::release_format() {
  
  return format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_allocated_format(::std::string* format) {
  if (format != NULL) {
    
  } else {
    
  }
  format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), format);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.format)
}

// optional string token = 3;
void RequestMessage::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& RequestMessage::token() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.token)
  return token_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_token(const ::std::string& value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.token)
}
 void RequestMessage::set_token(const char* value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.token)
}
 void RequestMessage::set_token(const char* value, size_t size) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.token)
}
 ::std::string* RequestMessage::mutable_token() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RequestMessage::release_token() {
  
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RequestMessage::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    
  } else {
    
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.token)
}

// map<string, .google.protobuf.Any> params = 4;
int RequestMessage::params_size() const {
  return params_.size();
}
void RequestMessage::clear_params() {
  params_.Clear();
}
 const ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >&
RequestMessage::params() const {
  // @@protoc_insertion_point(field_map:tutorial.RequestMessage.params)
  return params_.GetMap();
}
 ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >*
RequestMessage::mutable_params() {
  // @@protoc_insertion_point(field_mutable_map:tutorial.RequestMessage.params)
  return params_.MutableMap();
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ErrorStatus::kMessageFieldNumber;
const int ErrorStatus::kDetailsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ErrorStatus::ErrorStatus()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.ErrorStatus)
}

void ErrorStatus::InitAsDefaultInstance() {
  _is_default_instance_ = true;
  details_ = const_cast< ::google::protobuf::Any*>(&::google::protobuf::Any::default_instance());
}

ErrorStatus::ErrorStatus(const ErrorStatus& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:tutorial.ErrorStatus)
}

void ErrorStatus::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  message_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  details_ = NULL;
}

ErrorStatus::~ErrorStatus() {
  // @@protoc_insertion_point(destructor:tutorial.ErrorStatus)
  SharedDtor();
}

void ErrorStatus::SharedDtor() {
  message_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
    delete details_;
  }
}

void ErrorStatus::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ErrorStatus::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ErrorStatus_descriptor_;
}

const ErrorStatus& ErrorStatus::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  return *default_instance_;
}

ErrorStatus* ErrorStatus::default_instance_ = NULL;

ErrorStatus* ErrorStatus::New(::google::protobuf::Arena* arena) const {
  ErrorStatus* n = new ErrorStatus;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ErrorStatus::Clear() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (GetArenaNoVirtual() == NULL && details_ != NULL) delete details_;
  details_ = NULL;
}

bool ErrorStatus::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.ErrorStatus)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string message = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.ErrorStatus.message"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_details;
        break;
      }

      // optional .google.protobuf.Any details = 2;
      case 2: {
        if (tag == 18) {
         parse_details:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_details()));
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
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.ErrorStatus)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.ErrorStatus)
  return false;
#undef DO_
}

void ErrorStatus::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.ErrorStatus)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.ErrorStatus.message");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->message(), output);
  }

  // optional .google.protobuf.Any details = 2;
  if (this->has_details()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, *this->details_, output);
  }

  // @@protoc_insertion_point(serialize_end:tutorial.ErrorStatus)
}

::google::protobuf::uint8* ErrorStatus::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.ErrorStatus)
  // optional string message = 1;
  if (this->message().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.ErrorStatus.message");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->message(), target);
  }

  // optional .google.protobuf.Any details = 2;
  if (this->has_details()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, *this->details_, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:tutorial.ErrorStatus)
  return target;
}

int ErrorStatus::ByteSize() const {
  int total_size = 0;

  // optional string message = 1;
  if (this->message().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->message());
  }

  // optional .google.protobuf.Any details = 2;
  if (this->has_details()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        *this->details_);
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ErrorStatus::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ErrorStatus* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const ErrorStatus>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ErrorStatus::MergeFrom(const ErrorStatus& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.message().size() > 0) {

    message_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.message_);
  }
  if (from.has_details()) {
    mutable_details()->::google::protobuf::Any::MergeFrom(from.details());
  }
}

void ErrorStatus::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ErrorStatus::CopyFrom(const ErrorStatus& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ErrorStatus::IsInitialized() const {

  return true;
}

void ErrorStatus::Swap(ErrorStatus* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ErrorStatus::InternalSwap(ErrorStatus* other) {
  message_.Swap(&other->message_);
  std::swap(details_, other->details_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ErrorStatus::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ErrorStatus_descriptor_;
  metadata.reflection = ErrorStatus_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ErrorStatus

// optional string message = 1;
void ErrorStatus::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& ErrorStatus::message() const {
  // @@protoc_insertion_point(field_get:tutorial.ErrorStatus.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ErrorStatus::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.ErrorStatus.message)
}
 void ErrorStatus::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.ErrorStatus.message)
}
 void ErrorStatus::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.ErrorStatus.message)
}
 ::std::string* ErrorStatus::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.ErrorStatus.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* ErrorStatus::release_message() {
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void ErrorStatus::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:tutorial.ErrorStatus.message)
}

// optional .google.protobuf.Any details = 2;
bool ErrorStatus::has_details() const {
  return !_is_default_instance_ && details_ != NULL;
}
void ErrorStatus::clear_details() {
  if (GetArenaNoVirtual() == NULL && details_ != NULL) delete details_;
  details_ = NULL;
}
const ::google::protobuf::Any& ErrorStatus::details() const {
  // @@protoc_insertion_point(field_get:tutorial.ErrorStatus.details)
  return details_ != NULL ? *details_ : *default_instance_->details_;
}
::google::protobuf::Any* ErrorStatus::mutable_details() {
  
  if (details_ == NULL) {
    details_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.ErrorStatus.details)
  return details_;
}
::google::protobuf::Any* ErrorStatus::release_details() {
  
  ::google::protobuf::Any* temp = details_;
  details_ = NULL;
  return temp;
}
void ErrorStatus::set_allocated_details(::google::protobuf::Any* details) {
  delete details_;
  details_ = details;
  if (details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.ErrorStatus.details)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)
