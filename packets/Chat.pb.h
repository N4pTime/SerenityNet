// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Chat.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3019000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3019000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_Chat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Chat_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Chat_2eproto;
namespace Chat {
class Message;
struct MessageDefaultTypeInternal;
extern MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace Chat
PROTOBUF_NAMESPACE_OPEN
template<> ::Chat::Message* Arena::CreateMaybeMessage<::Chat::Message>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace Chat {

// ===================================================================

class Message final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:Chat.Message) */ {
 public:
  inline Message() : Message(nullptr) {}
  ~Message() override;
  explicit constexpr Message(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Message(const Message& from);
  Message(Message&& from) noexcept
    : Message() {
    *this = ::std::move(from);
  }

  inline Message& operator=(const Message& from) {
    CopyFrom(from);
    return *this;
  }
  inline Message& operator=(Message&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const Message& default_instance() {
    return *internal_default_instance();
  }
  static inline const Message* internal_default_instance() {
    return reinterpret_cast<const Message*>(
               &_Message_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Message& a, Message& b) {
    a.Swap(&b);
  }
  inline void Swap(Message* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Message* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Message* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Message>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const Message& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom(const Message& from);
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to, const ::PROTOBUF_NAMESPACE_ID::Message& from);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Message* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "Chat.Message";
  }
  protected:
  explicit Message(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUsernameFieldNumber = 2,
    kTextFieldNumber = 3,
    kIdFieldNumber = 1,
  };
  // string username = 2;
  void clear_username();
  const std::string& username() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_username(ArgT0&& arg0, ArgT... args);
  std::string* mutable_username();
  PROTOBUF_NODISCARD std::string* release_username();
  void set_allocated_username(std::string* username);
  private:
  const std::string& _internal_username() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_username(const std::string& value);
  std::string* _internal_mutable_username();
  public:

  // string text = 3;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // int32 id = 1;
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:Chat.Message)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr username_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
  int32_t id_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Chat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Message

// int32 id = 1;
inline void Message::clear_id() {
  id_ = 0;
}
inline int32_t Message::_internal_id() const {
  return id_;
}
inline int32_t Message::id() const {
  // @@protoc_insertion_point(field_get:Chat.Message.id)
  return _internal_id();
}
inline void Message::_internal_set_id(int32_t value) {
  
  id_ = value;
}
inline void Message::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:Chat.Message.id)
}

// string username = 2;
inline void Message::clear_username() {
  username_.ClearToEmpty();
}
inline const std::string& Message::username() const {
  // @@protoc_insertion_point(field_get:Chat.Message.username)
  return _internal_username();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Message::set_username(ArgT0&& arg0, ArgT... args) {
 
 username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Chat.Message.username)
}
inline std::string* Message::mutable_username() {
  std::string* _s = _internal_mutable_username();
  // @@protoc_insertion_point(field_mutable:Chat.Message.username)
  return _s;
}
inline const std::string& Message::_internal_username() const {
  return username_.Get();
}
inline void Message::_internal_set_username(const std::string& value) {
  
  username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Message::_internal_mutable_username() {
  
  return username_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Message::release_username() {
  // @@protoc_insertion_point(field_release:Chat.Message.username)
  return username_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Message::set_allocated_username(std::string* username) {
  if (username != nullptr) {
    
  } else {
    
  }
  username_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), username,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (username_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Chat.Message.username)
}

// string text = 3;
inline void Message::clear_text() {
  text_.ClearToEmpty();
}
inline const std::string& Message::text() const {
  // @@protoc_insertion_point(field_get:Chat.Message.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Message::set_text(ArgT0&& arg0, ArgT... args) {
 
 text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:Chat.Message.text)
}
inline std::string* Message::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:Chat.Message.text)
  return _s;
}
inline const std::string& Message::_internal_text() const {
  return text_.Get();
}
inline void Message::_internal_set_text(const std::string& value) {
  
  text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* Message::_internal_mutable_text() {
  
  return text_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* Message::release_text() {
  // @@protoc_insertion_point(field_release:Chat.Message.text)
  return text_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void Message::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  text_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), text,
      GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (text_.IsDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited())) {
    text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:Chat.Message.text)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Chat

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Chat_2eproto
