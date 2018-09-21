// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Information.RequestMessage.proto

#ifndef PROTOBUF_Information_2eRequestMessage_2eproto__INCLUDED
#define PROTOBUF_Information_2eRequestMessage_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/map.h>
#include <google/protobuf/map_field_inl.h>
#include <google/protobuf/unknown_field_set.h>
#include <google/protobuf/any.pb.h>
// @@protoc_insertion_point(includes)

namespace tutorial {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_Information_2eRequestMessage_2eproto();
void protobuf_AssignDesc_Information_2eRequestMessage_2eproto();
void protobuf_ShutdownFile_Information_2eRequestMessage_2eproto();

class ErrorStatus;
class RequestMessage;

// ===================================================================

class RequestMessage : public ::google::protobuf::Message {
 public:
  RequestMessage();
  virtual ~RequestMessage();

  RequestMessage(const RequestMessage& from);

  inline RequestMessage& operator=(const RequestMessage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RequestMessage& default_instance();

  void Swap(RequestMessage* other);

  // implements Message ----------------------------------------------

  inline RequestMessage* New() const { return New(NULL); }

  RequestMessage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const RequestMessage& from);
  void MergeFrom(const RequestMessage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(RequestMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------


  // accessors -------------------------------------------------------

  // optional string service = 1;
  void clear_service();
  static const int kServiceFieldNumber = 1;
  const ::std::string& service() const;
  void set_service(const ::std::string& value);
  void set_service(const char* value);
  void set_service(const char* value, size_t size);
  ::std::string* mutable_service();
  ::std::string* release_service();
  void set_allocated_service(::std::string* service);

  // optional string format = 2;
  void clear_format();
  static const int kFormatFieldNumber = 2;
  const ::std::string& format() const;
  void set_format(const ::std::string& value);
  void set_format(const char* value);
  void set_format(const char* value, size_t size);
  ::std::string* mutable_format();
  ::std::string* release_format();
  void set_allocated_format(::std::string* format);

  // optional string token = 3;
  void clear_token();
  static const int kTokenFieldNumber = 3;
  const ::std::string& token() const;
  void set_token(const ::std::string& value);
  void set_token(const char* value);
  void set_token(const char* value, size_t size);
  ::std::string* mutable_token();
  ::std::string* release_token();
  void set_allocated_token(::std::string* token);

  // map<string, .google.protobuf.Any> params = 4;
  int params_size() const;
  void clear_params();
  static const int kParamsFieldNumber = 4;
  const ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >&
      params() const;
  ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >*
      mutable_params();

  // @@protoc_insertion_point(class_scope:tutorial.RequestMessage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr service_;
  ::google::protobuf::internal::ArenaStringPtr format_;
  ::google::protobuf::internal::ArenaStringPtr token_;
  typedef ::google::protobuf::internal::MapEntryLite<
      ::std::string, ::google::protobuf::Any,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 >
      RequestMessage_ParamsEntry;
  ::google::protobuf::internal::MapField<
      ::std::string, ::google::protobuf::Any,
      ::google::protobuf::internal::WireFormatLite::TYPE_STRING,
      ::google::protobuf::internal::WireFormatLite::TYPE_MESSAGE,
      0 > params_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  friend void protobuf_AssignDesc_Information_2eRequestMessage_2eproto();
  friend void protobuf_ShutdownFile_Information_2eRequestMessage_2eproto();

  void InitAsDefaultInstance();
  static RequestMessage* default_instance_;
};
// -------------------------------------------------------------------

class ErrorStatus : public ::google::protobuf::Message {
 public:
  ErrorStatus();
  virtual ~ErrorStatus();

  ErrorStatus(const ErrorStatus& from);

  inline ErrorStatus& operator=(const ErrorStatus& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ErrorStatus& default_instance();

  void Swap(ErrorStatus* other);

  // implements Message ----------------------------------------------

  inline ErrorStatus* New() const { return New(NULL); }

  ErrorStatus* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ErrorStatus& from);
  void MergeFrom(const ErrorStatus& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ErrorStatus* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string message = 1;
  void clear_message();
  static const int kMessageFieldNumber = 1;
  const ::std::string& message() const;
  void set_message(const ::std::string& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  ::std::string* mutable_message();
  ::std::string* release_message();
  void set_allocated_message(::std::string* message);

  // optional .google.protobuf.Any details = 2;
  bool has_details() const;
  void clear_details();
  static const int kDetailsFieldNumber = 2;
  const ::google::protobuf::Any& details() const;
  ::google::protobuf::Any* mutable_details();
  ::google::protobuf::Any* release_details();
  void set_allocated_details(::google::protobuf::Any* details);

  // @@protoc_insertion_point(class_scope:tutorial.ErrorStatus)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::internal::ArenaStringPtr message_;
  ::google::protobuf::Any* details_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_Information_2eRequestMessage_2eproto();
  friend void protobuf_AssignDesc_Information_2eRequestMessage_2eproto();
  friend void protobuf_ShutdownFile_Information_2eRequestMessage_2eproto();

  void InitAsDefaultInstance();
  static ErrorStatus* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RequestMessage

// optional string service = 1;
inline void RequestMessage::clear_service() {
  service_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RequestMessage::service() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.service)
  return service_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_service(const ::std::string& value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.service)
}
inline void RequestMessage::set_service(const char* value) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.service)
}
inline void RequestMessage::set_service(const char* value, size_t size) {
  
  service_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.service)
}
inline ::std::string* RequestMessage::mutable_service() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.service)
  return service_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RequestMessage::release_service() {
  
  return service_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_allocated_service(::std::string* service) {
  if (service != NULL) {
    
  } else {
    
  }
  service_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.service)
}

// optional string format = 2;
inline void RequestMessage::clear_format() {
  format_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RequestMessage::format() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.format)
  return format_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_format(const ::std::string& value) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.format)
}
inline void RequestMessage::set_format(const char* value) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.format)
}
inline void RequestMessage::set_format(const char* value, size_t size) {
  
  format_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.format)
}
inline ::std::string* RequestMessage::mutable_format() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.format)
  return format_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RequestMessage::release_format() {
  
  return format_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_allocated_format(::std::string* format) {
  if (format != NULL) {
    
  } else {
    
  }
  format_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), format);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.format)
}

// optional string token = 3;
inline void RequestMessage::clear_token() {
  token_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& RequestMessage::token() const {
  // @@protoc_insertion_point(field_get:tutorial.RequestMessage.token)
  return token_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_token(const ::std::string& value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.RequestMessage.token)
}
inline void RequestMessage::set_token(const char* value) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.RequestMessage.token)
}
inline void RequestMessage::set_token(const char* value, size_t size) {
  
  token_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.RequestMessage.token)
}
inline ::std::string* RequestMessage::mutable_token() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.RequestMessage.token)
  return token_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* RequestMessage::release_token() {
  
  return token_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void RequestMessage::set_allocated_token(::std::string* token) {
  if (token != NULL) {
    
  } else {
    
  }
  token_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), token);
  // @@protoc_insertion_point(field_set_allocated:tutorial.RequestMessage.token)
}

// map<string, .google.protobuf.Any> params = 4;
inline int RequestMessage::params_size() const {
  return params_.size();
}
inline void RequestMessage::clear_params() {
  params_.Clear();
}
inline const ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >&
RequestMessage::params() const {
  // @@protoc_insertion_point(field_map:tutorial.RequestMessage.params)
  return params_.GetMap();
}
inline ::google::protobuf::Map< ::std::string, ::google::protobuf::Any >*
RequestMessage::mutable_params() {
  // @@protoc_insertion_point(field_mutable_map:tutorial.RequestMessage.params)
  return params_.MutableMap();
}

// -------------------------------------------------------------------

// ErrorStatus

// optional string message = 1;
inline void ErrorStatus::clear_message() {
  message_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ErrorStatus::message() const {
  // @@protoc_insertion_point(field_get:tutorial.ErrorStatus.message)
  return message_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorStatus::set_message(const ::std::string& value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:tutorial.ErrorStatus.message)
}
inline void ErrorStatus::set_message(const char* value) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:tutorial.ErrorStatus.message)
}
inline void ErrorStatus::set_message(const char* value, size_t size) {
  
  message_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:tutorial.ErrorStatus.message)
}
inline ::std::string* ErrorStatus::mutable_message() {
  
  // @@protoc_insertion_point(field_mutable:tutorial.ErrorStatus.message)
  return message_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ErrorStatus::release_message() {
  
  return message_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ErrorStatus::set_allocated_message(::std::string* message) {
  if (message != NULL) {
    
  } else {
    
  }
  message_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), message);
  // @@protoc_insertion_point(field_set_allocated:tutorial.ErrorStatus.message)
}

// optional .google.protobuf.Any details = 2;
inline bool ErrorStatus::has_details() const {
  return !_is_default_instance_ && details_ != NULL;
}
inline void ErrorStatus::clear_details() {
  if (GetArenaNoVirtual() == NULL && details_ != NULL) delete details_;
  details_ = NULL;
}
inline const ::google::protobuf::Any& ErrorStatus::details() const {
  // @@protoc_insertion_point(field_get:tutorial.ErrorStatus.details)
  return details_ != NULL ? *details_ : *default_instance_->details_;
}
inline ::google::protobuf::Any* ErrorStatus::mutable_details() {
  
  if (details_ == NULL) {
    details_ = new ::google::protobuf::Any;
  }
  // @@protoc_insertion_point(field_mutable:tutorial.ErrorStatus.details)
  return details_;
}
inline ::google::protobuf::Any* ErrorStatus::release_details() {
  
  ::google::protobuf::Any* temp = details_;
  details_ = NULL;
  return temp;
}
inline void ErrorStatus::set_allocated_details(::google::protobuf::Any* details) {
  delete details_;
  details_ = details;
  if (details) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tutorial.ErrorStatus.details)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace tutorial

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_Information_2eRequestMessage_2eproto__INCLUDED
