// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Chat.proto

#include "Chat.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG
namespace Chat {
constexpr Message::Message(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : username_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , text_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(0){}
struct MessageDefaultTypeInternal {
  constexpr MessageDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~MessageDefaultTypeInternal() {}
  union {
    Message _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT MessageDefaultTypeInternal _Message_default_instance_;
}  // namespace Chat
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_Chat_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_Chat_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_Chat_2eproto = nullptr;

const uint32_t TableStruct_Chat_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::Chat::Message, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::Chat::Message, id_),
  PROTOBUF_FIELD_OFFSET(::Chat::Message, username_),
  PROTOBUF_FIELD_OFFSET(::Chat::Message, text_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::Chat::Message)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::Chat::_Message_default_instance_),
};

const char descriptor_table_protodef_Chat_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\nChat.proto\022\004Chat\"5\n\007Message\022\n\n\002id\030\001 \001("
  "\005\022\020\n\010username\030\002 \001(\t\022\014\n\004text\030\003 \001(\tb\006proto"
  "3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_Chat_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Chat_2eproto = {
  false, false, 81, descriptor_table_protodef_Chat_2eproto, "Chat.proto", 
  &descriptor_table_Chat_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_Chat_2eproto::offsets,
  file_level_metadata_Chat_2eproto, file_level_enum_descriptors_Chat_2eproto, file_level_service_descriptors_Chat_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_Chat_2eproto_getter() {
  return &descriptor_table_Chat_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_Chat_2eproto(&descriptor_table_Chat_2eproto);
namespace Chat {

// ===================================================================

class Message::_Internal {
 public:
};

Message::Message(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:Chat.Message)
}
Message::Message(const Message& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_username().empty()) {
    username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_username(), 
      GetArenaForAllocation());
  }
  text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    text_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_text(), 
      GetArenaForAllocation());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:Chat.Message)
}

inline void Message::SharedCtor() {
username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
text_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  text_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
id_ = 0;
}

Message::~Message() {
  // @@protoc_insertion_point(destructor:Chat.Message)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Message::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  text_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Message::ArenaDtor(void* object) {
  Message* _this = reinterpret_cast< Message* >(object);
  (void)_this;
}
void Message::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Message::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Message::Clear() {
// @@protoc_insertion_point(message_clear_start:Chat.Message)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  username_.ClearToEmpty();
  text_.ClearToEmpty();
  id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Message::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string username = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_username();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Chat.Message.username"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string text = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_text();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "Chat.Message.text"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Message::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:Chat.Message)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // string username = 2;
  if (!this->_internal_username().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_username().data(), static_cast<int>(this->_internal_username().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Chat.Message.username");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_username(), target);
  }

  // string text = 3;
  if (!this->_internal_text().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "Chat.Message.text");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_text(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:Chat.Message)
  return target;
}

size_t Message::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:Chat.Message)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string username = 2;
  if (!this->_internal_username().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());
  }

  // string text = 3;
  if (!this->_internal_text().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Message::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Message::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Message::GetClassData() const { return &_class_data_; }

void Message::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Message *>(to)->MergeFrom(
      static_cast<const Message &>(from));
}


void Message::MergeFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:Chat.Message)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_username().empty()) {
    _internal_set_username(from._internal_username());
  }
  if (!from._internal_text().empty()) {
    _internal_set_text(from._internal_text());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Message::CopyFrom(const Message& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:Chat.Message)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Message::IsInitialized() const {
  return true;
}

void Message::InternalSwap(Message* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &username_, lhs_arena,
      &other->username_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &text_, lhs_arena,
      &other->text_, rhs_arena
  );
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Message::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_Chat_2eproto_getter, &descriptor_table_Chat_2eproto_once,
      file_level_metadata_Chat_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Chat
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::Chat::Message* Arena::CreateMaybeMessage< ::Chat::Message >(Arena* arena) {
  return Arena::CreateMessageInternal< ::Chat::Message >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
