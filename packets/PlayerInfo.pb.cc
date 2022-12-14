// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PlayerInfo.proto

#include "PlayerInfo.pb.h"

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
namespace PlayerInfo {
constexpr Character::Character(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized)
  : position_()
  , direction_()
  , username_(&::PROTOBUF_NAMESPACE_ID::internal::fixed_address_empty_string)
  , id_(0){}
struct CharacterDefaultTypeInternal {
  constexpr CharacterDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~CharacterDefaultTypeInternal() {}
  union {
    Character _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT CharacterDefaultTypeInternal _Character_default_instance_;
}  // namespace PlayerInfo
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PlayerInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PlayerInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PlayerInfo_2eproto = nullptr;

const uint32_t TableStruct_PlayerInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::PlayerInfo::Character, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::PlayerInfo::Character, id_),
  PROTOBUF_FIELD_OFFSET(::PlayerInfo::Character, username_),
  PROTOBUF_FIELD_OFFSET(::PlayerInfo::Character, position_),
  PROTOBUF_FIELD_OFFSET(::PlayerInfo::Character, direction_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::PlayerInfo::Character)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::PlayerInfo::_Character_default_instance_),
};

const char descriptor_table_protodef_PlayerInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020PlayerInfo.proto\022\nPlayerInfo\"V\n\tCharac"
  "ter\022\n\n\002id\030\001 \001(\005\022\020\n\010username\030\002 \001(\t\022\024\n\010pos"
  "ition\030\003 \003(\002B\002\020\001\022\025\n\tdirection\030\004 \003(\002B\002\020\001b\006"
  "proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PlayerInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PlayerInfo_2eproto = {
  false, false, 126, descriptor_table_protodef_PlayerInfo_2eproto, "PlayerInfo.proto", 
  &descriptor_table_PlayerInfo_2eproto_once, nullptr, 0, 1,
  schemas, file_default_instances, TableStruct_PlayerInfo_2eproto::offsets,
  file_level_metadata_PlayerInfo_2eproto, file_level_enum_descriptors_PlayerInfo_2eproto, file_level_service_descriptors_PlayerInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_PlayerInfo_2eproto_getter() {
  return &descriptor_table_PlayerInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_PlayerInfo_2eproto(&descriptor_table_PlayerInfo_2eproto);
namespace PlayerInfo {

// ===================================================================

class Character::_Internal {
 public:
};

Character::Character(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned),
  position_(arena),
  direction_(arena) {
  SharedCtor();
  if (!is_message_owned) {
    RegisterArenaDtor(arena);
  }
  // @@protoc_insertion_point(arena_constructor:PlayerInfo.Character)
}
Character::Character(const Character& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      position_(from.position_),
      direction_(from.direction_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_username().empty()) {
    username_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_username(), 
      GetArenaForAllocation());
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:PlayerInfo.Character)
}

inline void Character::SharedCtor() {
username_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  username_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), "", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
id_ = 0;
}

Character::~Character() {
  // @@protoc_insertion_point(destructor:PlayerInfo.Character)
  if (GetArenaForAllocation() != nullptr) return;
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

inline void Character::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  username_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void Character::ArenaDtor(void* object) {
  Character* _this = reinterpret_cast< Character* >(object);
  (void)_this;
}
void Character::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void Character::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Character::Clear() {
// @@protoc_insertion_point(message_clear_start:PlayerInfo.Character)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  position_.Clear();
  direction_.Clear();
  username_.ClearToEmpty();
  id_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Character::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "PlayerInfo.Character.username"));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated float position = 3 [packed = true];
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_position(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 29) {
          _internal_add_position(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // repeated float direction = 4 [packed = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedFloatParser(_internal_mutable_direction(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 37) {
          _internal_add_direction(::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr));
          ptr += sizeof(float);
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

uint8_t* Character::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:PlayerInfo.Character)
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
      "PlayerInfo.Character.username");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_username(), target);
  }

  // repeated float position = 3 [packed = true];
  if (this->_internal_position_size() > 0) {
    target = stream->WriteFixedPacked(3, _internal_position(), target);
  }

  // repeated float direction = 4 [packed = true];
  if (this->_internal_direction_size() > 0) {
    target = stream->WriteFixedPacked(4, _internal_direction(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:PlayerInfo.Character)
  return target;
}

size_t Character::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:PlayerInfo.Character)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated float position = 3 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_position_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  // repeated float direction = 4 [packed = true];
  {
    unsigned int count = static_cast<unsigned int>(this->_internal_direction_size());
    size_t data_size = 4UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
            static_cast<int32_t>(data_size));
    }
    total_size += data_size;
  }

  // string username = 2;
  if (!this->_internal_username().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_username());
  }

  // int32 id = 1;
  if (this->_internal_id() != 0) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32SizePlusOne(this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Character::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSizeCheck,
    Character::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Character::GetClassData() const { return &_class_data_; }

void Character::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message* to,
                      const ::PROTOBUF_NAMESPACE_ID::Message& from) {
  static_cast<Character *>(to)->MergeFrom(
      static_cast<const Character &>(from));
}


void Character::MergeFrom(const Character& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:PlayerInfo.Character)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  position_.MergeFrom(from.position_);
  direction_.MergeFrom(from.direction_);
  if (!from._internal_username().empty()) {
    _internal_set_username(from._internal_username());
  }
  if (from._internal_id() != 0) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Character::CopyFrom(const Character& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:PlayerInfo.Character)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Character::IsInitialized() const {
  return true;
}

void Character::InternalSwap(Character* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  position_.InternalSwap(&other->position_);
  direction_.InternalSwap(&other->direction_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      &username_, lhs_arena,
      &other->username_, rhs_arena
  );
  swap(id_, other->id_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Character::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_PlayerInfo_2eproto_getter, &descriptor_table_PlayerInfo_2eproto_once,
      file_level_metadata_PlayerInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace PlayerInfo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::PlayerInfo::Character* Arena::CreateMaybeMessage< ::PlayerInfo::Character >(Arena* arena) {
  return Arena::CreateMessageInternal< ::PlayerInfo::Character >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
