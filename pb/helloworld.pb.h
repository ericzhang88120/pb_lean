// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: helloworld.proto

#ifndef PROTOBUF_helloworld_2eproto__INCLUDED
#define PROTOBUF_helloworld_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace test {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_helloworld_2eproto();
void protobuf_AssignDesc_helloworld_2eproto();
void protobuf_ShutdownFile_helloworld_2eproto();

class helloworld;

enum msgtype {
  testone = 1,
  testtwo = 2
};
bool msgtype_IsValid(int value);
const msgtype msgtype_MIN = testone;
const msgtype msgtype_MAX = testtwo;
const int msgtype_ARRAYSIZE = msgtype_MAX + 1;

const ::google::protobuf::EnumDescriptor* msgtype_descriptor();
inline const ::std::string& msgtype_Name(msgtype value) {
  return ::google::protobuf::internal::NameOfEnum(
    msgtype_descriptor(), value);
}
inline bool msgtype_Parse(
    const ::std::string& name, msgtype* value) {
  return ::google::protobuf::internal::ParseNamedEnum<msgtype>(
    msgtype_descriptor(), name, value);
}
// ===================================================================

class helloworld : public ::google::protobuf::Message {
 public:
  helloworld();
  virtual ~helloworld();

  helloworld(const helloworld& from);

  inline helloworld& operator=(const helloworld& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const helloworld& default_instance();

  void Swap(helloworld* other);

  // implements Message ----------------------------------------------

  inline helloworld* New() const { return New(NULL); }

  helloworld* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const helloworld& from);
  void MergeFrom(const helloworld& from);
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
  void InternalSwap(helloworld* other);
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

  // required int32 type = 1;
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 1;
  ::google::protobuf::int32 type() const;
  void set_type(::google::protobuf::int32 value);

  // required string msg = 2;
  bool has_msg() const;
  void clear_msg();
  static const int kMsgFieldNumber = 2;
  const ::std::string& msg() const;
  void set_msg(const ::std::string& value);
  void set_msg(const char* value);
  void set_msg(const char* value, size_t size);
  ::std::string* mutable_msg();
  ::std::string* release_msg();
  void set_allocated_msg(::std::string* msg);

  // @@protoc_insertion_point(class_scope:test.helloworld)
 private:
  inline void set_has_type();
  inline void clear_has_type();
  inline void set_has_msg();
  inline void clear_has_msg();

  // helper for ByteSize()
  int RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr msg_;
  ::google::protobuf::int32 type_;
  friend void  protobuf_AddDesc_helloworld_2eproto();
  friend void protobuf_AssignDesc_helloworld_2eproto();
  friend void protobuf_ShutdownFile_helloworld_2eproto();

  void InitAsDefaultInstance();
  static helloworld* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// helloworld

// required int32 type = 1;
inline bool helloworld::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void helloworld::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void helloworld::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void helloworld::clear_type() {
  type_ = 0;
  clear_has_type();
}
inline ::google::protobuf::int32 helloworld::type() const {
  // @@protoc_insertion_point(field_get:test.helloworld.type)
  return type_;
}
inline void helloworld::set_type(::google::protobuf::int32 value) {
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:test.helloworld.type)
}

// required string msg = 2;
inline bool helloworld::has_msg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void helloworld::set_has_msg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void helloworld::clear_has_msg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void helloworld::clear_msg() {
  msg_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_msg();
}
inline const ::std::string& helloworld::msg() const {
  // @@protoc_insertion_point(field_get:test.helloworld.msg)
  return msg_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void helloworld::set_msg(const ::std::string& value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:test.helloworld.msg)
}
inline void helloworld::set_msg(const char* value) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:test.helloworld.msg)
}
inline void helloworld::set_msg(const char* value, size_t size) {
  set_has_msg();
  msg_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:test.helloworld.msg)
}
inline ::std::string* helloworld::mutable_msg() {
  set_has_msg();
  // @@protoc_insertion_point(field_mutable:test.helloworld.msg)
  return msg_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* helloworld::release_msg() {
  clear_has_msg();
  return msg_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void helloworld::set_allocated_msg(::std::string* msg) {
  if (msg != NULL) {
    set_has_msg();
  } else {
    clear_has_msg();
  }
  msg_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msg);
  // @@protoc_insertion_point(field_set_allocated:test.helloworld.msg)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace test

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::test::msgtype> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::test::msgtype>() {
  return ::test::msgtype_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_helloworld_2eproto__INCLUDED
