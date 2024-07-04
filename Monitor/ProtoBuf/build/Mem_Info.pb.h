// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Mem_Info.proto
// Protobuf C++ Version: 5.27.2

#ifndef GOOGLE_PROTOBUF_INCLUDED_Mem_5fInfo_2eproto_2epb_2eh
#define GOOGLE_PROTOBUF_INCLUDED_Mem_5fInfo_2eproto_2epb_2eh

#include <limits>
#include <string>
#include <type_traits>
#include <utility>

#include "google/protobuf/runtime_version.h"
#if PROTOBUF_VERSION != 5027002
#error "Protobuf C++ gencode is built with an incompatible version of"
#error "Protobuf C++ headers/runtime. See"
#error "https://protobuf.dev/support/cross-version-runtime-guarantee/#cpp"
#endif
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/arena.h"
#include "google/protobuf/arenastring.h"
#include "google/protobuf/generated_message_tctable_decl.h"
#include "google/protobuf/generated_message_util.h"
#include "google/protobuf/metadata_lite.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/message.h"
#include "google/protobuf/repeated_field.h"  // IWYU pragma: export
#include "google/protobuf/extension_set.h"  // IWYU pragma: export
#include "google/protobuf/unknown_field_set.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"

#define PROTOBUF_INTERNAL_EXPORT_Mem_5fInfo_2eproto

namespace google {
namespace protobuf {
namespace internal {
class AnyMetadata;
}  // namespace internal
}  // namespace protobuf
}  // namespace google

// Internal implementation detail -- do not use these members.
struct TableStruct_Mem_5fInfo_2eproto {
  static const ::uint32_t offsets[];
};
extern const ::google::protobuf::internal::DescriptorTable
    descriptor_table_Mem_5fInfo_2eproto;
namespace monitor {
class MemInfo;
struct MemInfoDefaultTypeInternal;
extern MemInfoDefaultTypeInternal _MemInfo_default_instance_;
}  // namespace monitor
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

namespace monitor {

// ===================================================================


// -------------------------------------------------------------------

class MemInfo final : public ::google::protobuf::Message
/* @@protoc_insertion_point(class_definition:monitor.MemInfo) */ {
 public:
  inline MemInfo() : MemInfo(nullptr) {}
  ~MemInfo() override;
  template <typename = void>
  explicit PROTOBUF_CONSTEXPR MemInfo(
      ::google::protobuf::internal::ConstantInitialized);

  inline MemInfo(const MemInfo& from) : MemInfo(nullptr, from) {}
  inline MemInfo(MemInfo&& from) noexcept
      : MemInfo(nullptr, std::move(from)) {}
  inline MemInfo& operator=(const MemInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline MemInfo& operator=(MemInfo&& from) noexcept {
    if (this == &from) return *this;
    if (GetArena() == from.GetArena()
#ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetArena() != nullptr
#endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance);
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields()
      ABSL_ATTRIBUTE_LIFETIME_BOUND {
    return _internal_metadata_.mutable_unknown_fields<::google::protobuf::UnknownFieldSet>();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::google::protobuf::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::google::protobuf::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const MemInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const MemInfo* internal_default_instance() {
    return reinterpret_cast<const MemInfo*>(
        &_MemInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages = 0;
  friend void swap(MemInfo& a, MemInfo& b) { a.Swap(&b); }
  inline void Swap(MemInfo* other) {
    if (other == this) return;
#ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() != nullptr && GetArena() == other->GetArena()) {
#else   // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetArena() == other->GetArena()) {
#endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::google::protobuf::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(MemInfo* other) {
    if (other == this) return;
    ABSL_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MemInfo* New(::google::protobuf::Arena* arena = nullptr) const final {
    return ::google::protobuf::Message::DefaultConstruct<MemInfo>(arena);
  }
  using ::google::protobuf::Message::CopyFrom;
  void CopyFrom(const MemInfo& from);
  using ::google::protobuf::Message::MergeFrom;
  void MergeFrom(const MemInfo& from) { MemInfo::MergeImpl(*this, from); }

  private:
  static void MergeImpl(
      ::google::protobuf::MessageLite& to_msg,
      const ::google::protobuf::MessageLite& from_msg);

  public:
  bool IsInitialized() const {
    return true;
  }
  ABSL_ATTRIBUTE_REINITIALIZES void Clear() final;
  ::size_t ByteSizeLong() const final;
  ::uint8_t* _InternalSerialize(
      ::uint8_t* target,
      ::google::protobuf::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::google::protobuf::Arena* arena);
  void SharedDtor();
  void InternalSwap(MemInfo* other);
 private:
  friend class ::google::protobuf::internal::AnyMetadata;
  static ::absl::string_view FullMessageName() { return "monitor.MemInfo"; }

 protected:
  explicit MemInfo(::google::protobuf::Arena* arena);
  MemInfo(::google::protobuf::Arena* arena, const MemInfo& from);
  MemInfo(::google::protobuf::Arena* arena, MemInfo&& from) noexcept
      : MemInfo(arena) {
    *this = ::std::move(from);
  }
  const ::google::protobuf::Message::ClassData* GetClassData() const final;

 public:
  ::google::protobuf::Metadata GetMetadata() const;
  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------
  enum : int {
    kTotalFieldNumber = 1,
    kFreeFieldNumber = 2,
    kAvailFieldNumber = 3,
    kBuffersFieldNumber = 4,
    kCachedFieldNumber = 5,
    kSwapCachedFieldNumber = 6,
    kActiveFieldNumber = 7,
    kInactiveFieldNumber = 8,
    kActiveAnonFieldNumber = 9,
    kInactiveAnonFieldNumber = 10,
    kActiveFileFieldNumber = 11,
    kInactiveFileFieldNumber = 12,
    kDirtyFieldNumber = 13,
    kWritebackFieldNumber = 14,
    kAnonPagesFieldNumber = 15,
    kMappedFieldNumber = 16,
    kKReclaimableFieldNumber = 17,
    kSReclaimableFieldNumber = 18,
    kSUnreclaimFieldNumber = 19,
    kUsedPercentFieldNumber = 20,
  };
  // float total = 1;
  void clear_total() ;
  float total() const;
  void set_total(float value);

  private:
  float _internal_total() const;
  void _internal_set_total(float value);

  public:
  // float free = 2;
  void clear_free() ;
  float free() const;
  void set_free(float value);

  private:
  float _internal_free() const;
  void _internal_set_free(float value);

  public:
  // float avail = 3;
  void clear_avail() ;
  float avail() const;
  void set_avail(float value);

  private:
  float _internal_avail() const;
  void _internal_set_avail(float value);

  public:
  // float buffers = 4;
  void clear_buffers() ;
  float buffers() const;
  void set_buffers(float value);

  private:
  float _internal_buffers() const;
  void _internal_set_buffers(float value);

  public:
  // float cached = 5;
  void clear_cached() ;
  float cached() const;
  void set_cached(float value);

  private:
  float _internal_cached() const;
  void _internal_set_cached(float value);

  public:
  // float swap_cached = 6;
  void clear_swap_cached() ;
  float swap_cached() const;
  void set_swap_cached(float value);

  private:
  float _internal_swap_cached() const;
  void _internal_set_swap_cached(float value);

  public:
  // float active = 7;
  void clear_active() ;
  float active() const;
  void set_active(float value);

  private:
  float _internal_active() const;
  void _internal_set_active(float value);

  public:
  // float inactive = 8;
  void clear_inactive() ;
  float inactive() const;
  void set_inactive(float value);

  private:
  float _internal_inactive() const;
  void _internal_set_inactive(float value);

  public:
  // float active_anon = 9;
  void clear_active_anon() ;
  float active_anon() const;
  void set_active_anon(float value);

  private:
  float _internal_active_anon() const;
  void _internal_set_active_anon(float value);

  public:
  // float inactive_anon = 10;
  void clear_inactive_anon() ;
  float inactive_anon() const;
  void set_inactive_anon(float value);

  private:
  float _internal_inactive_anon() const;
  void _internal_set_inactive_anon(float value);

  public:
  // float active_file = 11;
  void clear_active_file() ;
  float active_file() const;
  void set_active_file(float value);

  private:
  float _internal_active_file() const;
  void _internal_set_active_file(float value);

  public:
  // float inactive_file = 12;
  void clear_inactive_file() ;
  float inactive_file() const;
  void set_inactive_file(float value);

  private:
  float _internal_inactive_file() const;
  void _internal_set_inactive_file(float value);

  public:
  // float dirty = 13;
  void clear_dirty() ;
  float dirty() const;
  void set_dirty(float value);

  private:
  float _internal_dirty() const;
  void _internal_set_dirty(float value);

  public:
  // float writeback = 14;
  void clear_writeback() ;
  float writeback() const;
  void set_writeback(float value);

  private:
  float _internal_writeback() const;
  void _internal_set_writeback(float value);

  public:
  // float anon_pages = 15;
  void clear_anon_pages() ;
  float anon_pages() const;
  void set_anon_pages(float value);

  private:
  float _internal_anon_pages() const;
  void _internal_set_anon_pages(float value);

  public:
  // float mapped = 16;
  void clear_mapped() ;
  float mapped() const;
  void set_mapped(float value);

  private:
  float _internal_mapped() const;
  void _internal_set_mapped(float value);

  public:
  // float k_reclaimable = 17;
  void clear_k_reclaimable() ;
  float k_reclaimable() const;
  void set_k_reclaimable(float value);

  private:
  float _internal_k_reclaimable() const;
  void _internal_set_k_reclaimable(float value);

  public:
  // float s_reclaimable = 18;
  void clear_s_reclaimable() ;
  float s_reclaimable() const;
  void set_s_reclaimable(float value);

  private:
  float _internal_s_reclaimable() const;
  void _internal_set_s_reclaimable(float value);

  public:
  // float s_unreclaim = 19;
  void clear_s_unreclaim() ;
  float s_unreclaim() const;
  void set_s_unreclaim(float value);

  private:
  float _internal_s_unreclaim() const;
  void _internal_set_s_unreclaim(float value);

  public:
  // float used_percent = 20;
  void clear_used_percent() ;
  float used_percent() const;
  void set_used_percent(float value);

  private:
  float _internal_used_percent() const;
  void _internal_set_used_percent(float value);

  public:
  // @@protoc_insertion_point(class_scope:monitor.MemInfo)
 private:
  class _Internal;
  friend class ::google::protobuf::internal::TcParser;
  static const ::google::protobuf::internal::TcParseTable<
      5, 20, 0,
      0, 2>
      _table_;

  static constexpr const void* _raw_default_instance_ =
      &_MemInfo_default_instance_;

  friend class ::google::protobuf::MessageLite;
  friend class ::google::protobuf::Arena;
  template <typename T>
  friend class ::google::protobuf::Arena::InternalHelper;
  using InternalArenaConstructable_ = void;
  using DestructorSkippable_ = void;
  struct Impl_ {
    inline explicit constexpr Impl_(
        ::google::protobuf::internal::ConstantInitialized) noexcept;
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena);
    inline explicit Impl_(::google::protobuf::internal::InternalVisibility visibility,
                          ::google::protobuf::Arena* arena, const Impl_& from,
                          const MemInfo& from_msg);
    float total_;
    float free_;
    float avail_;
    float buffers_;
    float cached_;
    float swap_cached_;
    float active_;
    float inactive_;
    float active_anon_;
    float inactive_anon_;
    float active_file_;
    float inactive_file_;
    float dirty_;
    float writeback_;
    float anon_pages_;
    float mapped_;
    float k_reclaimable_;
    float s_reclaimable_;
    float s_unreclaim_;
    float used_percent_;
    mutable ::google::protobuf::internal::CachedSize _cached_size_;
    PROTOBUF_TSAN_DECLARE_MEMBER
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_Mem_5fInfo_2eproto;
};

// ===================================================================




// ===================================================================


#ifdef __GNUC__
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// -------------------------------------------------------------------

// MemInfo

// float total = 1;
inline void MemInfo::clear_total() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.total_ = 0;
}
inline float MemInfo::total() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.total)
  return _internal_total();
}
inline void MemInfo::set_total(float value) {
  _internal_set_total(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.total)
}
inline float MemInfo::_internal_total() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.total_;
}
inline void MemInfo::_internal_set_total(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.total_ = value;
}

// float free = 2;
inline void MemInfo::clear_free() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.free_ = 0;
}
inline float MemInfo::free() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.free)
  return _internal_free();
}
inline void MemInfo::set_free(float value) {
  _internal_set_free(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.free)
}
inline float MemInfo::_internal_free() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.free_;
}
inline void MemInfo::_internal_set_free(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.free_ = value;
}

// float avail = 3;
inline void MemInfo::clear_avail() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avail_ = 0;
}
inline float MemInfo::avail() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.avail)
  return _internal_avail();
}
inline void MemInfo::set_avail(float value) {
  _internal_set_avail(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.avail)
}
inline float MemInfo::_internal_avail() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.avail_;
}
inline void MemInfo::_internal_set_avail(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.avail_ = value;
}

// float buffers = 4;
inline void MemInfo::clear_buffers() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.buffers_ = 0;
}
inline float MemInfo::buffers() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.buffers)
  return _internal_buffers();
}
inline void MemInfo::set_buffers(float value) {
  _internal_set_buffers(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.buffers)
}
inline float MemInfo::_internal_buffers() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.buffers_;
}
inline void MemInfo::_internal_set_buffers(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.buffers_ = value;
}

// float cached = 5;
inline void MemInfo::clear_cached() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cached_ = 0;
}
inline float MemInfo::cached() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.cached)
  return _internal_cached();
}
inline void MemInfo::set_cached(float value) {
  _internal_set_cached(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.cached)
}
inline float MemInfo::_internal_cached() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.cached_;
}
inline void MemInfo::_internal_set_cached(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.cached_ = value;
}

// float swap_cached = 6;
inline void MemInfo::clear_swap_cached() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.swap_cached_ = 0;
}
inline float MemInfo::swap_cached() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.swap_cached)
  return _internal_swap_cached();
}
inline void MemInfo::set_swap_cached(float value) {
  _internal_set_swap_cached(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.swap_cached)
}
inline float MemInfo::_internal_swap_cached() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.swap_cached_;
}
inline void MemInfo::_internal_set_swap_cached(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.swap_cached_ = value;
}

// float active = 7;
inline void MemInfo::clear_active() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_ = 0;
}
inline float MemInfo::active() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.active)
  return _internal_active();
}
inline void MemInfo::set_active(float value) {
  _internal_set_active(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.active)
}
inline float MemInfo::_internal_active() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.active_;
}
inline void MemInfo::_internal_set_active(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_ = value;
}

// float inactive = 8;
inline void MemInfo::clear_inactive() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_ = 0;
}
inline float MemInfo::inactive() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.inactive)
  return _internal_inactive();
}
inline void MemInfo::set_inactive(float value) {
  _internal_set_inactive(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.inactive)
}
inline float MemInfo::_internal_inactive() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.inactive_;
}
inline void MemInfo::_internal_set_inactive(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_ = value;
}

// float active_anon = 9;
inline void MemInfo::clear_active_anon() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_anon_ = 0;
}
inline float MemInfo::active_anon() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.active_anon)
  return _internal_active_anon();
}
inline void MemInfo::set_active_anon(float value) {
  _internal_set_active_anon(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.active_anon)
}
inline float MemInfo::_internal_active_anon() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.active_anon_;
}
inline void MemInfo::_internal_set_active_anon(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_anon_ = value;
}

// float inactive_anon = 10;
inline void MemInfo::clear_inactive_anon() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_anon_ = 0;
}
inline float MemInfo::inactive_anon() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.inactive_anon)
  return _internal_inactive_anon();
}
inline void MemInfo::set_inactive_anon(float value) {
  _internal_set_inactive_anon(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.inactive_anon)
}
inline float MemInfo::_internal_inactive_anon() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.inactive_anon_;
}
inline void MemInfo::_internal_set_inactive_anon(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_anon_ = value;
}

// float active_file = 11;
inline void MemInfo::clear_active_file() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_file_ = 0;
}
inline float MemInfo::active_file() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.active_file)
  return _internal_active_file();
}
inline void MemInfo::set_active_file(float value) {
  _internal_set_active_file(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.active_file)
}
inline float MemInfo::_internal_active_file() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.active_file_;
}
inline void MemInfo::_internal_set_active_file(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.active_file_ = value;
}

// float inactive_file = 12;
inline void MemInfo::clear_inactive_file() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_file_ = 0;
}
inline float MemInfo::inactive_file() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.inactive_file)
  return _internal_inactive_file();
}
inline void MemInfo::set_inactive_file(float value) {
  _internal_set_inactive_file(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.inactive_file)
}
inline float MemInfo::_internal_inactive_file() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.inactive_file_;
}
inline void MemInfo::_internal_set_inactive_file(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.inactive_file_ = value;
}

// float dirty = 13;
inline void MemInfo::clear_dirty() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.dirty_ = 0;
}
inline float MemInfo::dirty() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.dirty)
  return _internal_dirty();
}
inline void MemInfo::set_dirty(float value) {
  _internal_set_dirty(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.dirty)
}
inline float MemInfo::_internal_dirty() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.dirty_;
}
inline void MemInfo::_internal_set_dirty(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.dirty_ = value;
}

// float writeback = 14;
inline void MemInfo::clear_writeback() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.writeback_ = 0;
}
inline float MemInfo::writeback() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.writeback)
  return _internal_writeback();
}
inline void MemInfo::set_writeback(float value) {
  _internal_set_writeback(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.writeback)
}
inline float MemInfo::_internal_writeback() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.writeback_;
}
inline void MemInfo::_internal_set_writeback(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.writeback_ = value;
}

// float anon_pages = 15;
inline void MemInfo::clear_anon_pages() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.anon_pages_ = 0;
}
inline float MemInfo::anon_pages() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.anon_pages)
  return _internal_anon_pages();
}
inline void MemInfo::set_anon_pages(float value) {
  _internal_set_anon_pages(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.anon_pages)
}
inline float MemInfo::_internal_anon_pages() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.anon_pages_;
}
inline void MemInfo::_internal_set_anon_pages(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.anon_pages_ = value;
}

// float mapped = 16;
inline void MemInfo::clear_mapped() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.mapped_ = 0;
}
inline float MemInfo::mapped() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.mapped)
  return _internal_mapped();
}
inline void MemInfo::set_mapped(float value) {
  _internal_set_mapped(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.mapped)
}
inline float MemInfo::_internal_mapped() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.mapped_;
}
inline void MemInfo::_internal_set_mapped(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.mapped_ = value;
}

// float k_reclaimable = 17;
inline void MemInfo::clear_k_reclaimable() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.k_reclaimable_ = 0;
}
inline float MemInfo::k_reclaimable() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.k_reclaimable)
  return _internal_k_reclaimable();
}
inline void MemInfo::set_k_reclaimable(float value) {
  _internal_set_k_reclaimable(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.k_reclaimable)
}
inline float MemInfo::_internal_k_reclaimable() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.k_reclaimable_;
}
inline void MemInfo::_internal_set_k_reclaimable(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.k_reclaimable_ = value;
}

// float s_reclaimable = 18;
inline void MemInfo::clear_s_reclaimable() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.s_reclaimable_ = 0;
}
inline float MemInfo::s_reclaimable() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.s_reclaimable)
  return _internal_s_reclaimable();
}
inline void MemInfo::set_s_reclaimable(float value) {
  _internal_set_s_reclaimable(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.s_reclaimable)
}
inline float MemInfo::_internal_s_reclaimable() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.s_reclaimable_;
}
inline void MemInfo::_internal_set_s_reclaimable(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.s_reclaimable_ = value;
}

// float s_unreclaim = 19;
inline void MemInfo::clear_s_unreclaim() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.s_unreclaim_ = 0;
}
inline float MemInfo::s_unreclaim() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.s_unreclaim)
  return _internal_s_unreclaim();
}
inline void MemInfo::set_s_unreclaim(float value) {
  _internal_set_s_unreclaim(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.s_unreclaim)
}
inline float MemInfo::_internal_s_unreclaim() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.s_unreclaim_;
}
inline void MemInfo::_internal_set_s_unreclaim(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.s_unreclaim_ = value;
}

// float used_percent = 20;
inline void MemInfo::clear_used_percent() {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.used_percent_ = 0;
}
inline float MemInfo::used_percent() const {
  // @@protoc_insertion_point(field_get:monitor.MemInfo.used_percent)
  return _internal_used_percent();
}
inline void MemInfo::set_used_percent(float value) {
  _internal_set_used_percent(value);
  // @@protoc_insertion_point(field_set:monitor.MemInfo.used_percent)
}
inline float MemInfo::_internal_used_percent() const {
  ::google::protobuf::internal::TSanRead(&_impl_);
  return _impl_.used_percent_;
}
inline void MemInfo::_internal_set_used_percent(float value) {
  ::google::protobuf::internal::TSanWrite(&_impl_);
  _impl_.used_percent_ = value;
}

#ifdef __GNUC__
#pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)
}  // namespace monitor


// @@protoc_insertion_point(global_scope)

#include "google/protobuf/port_undef.inc"

#endif  // GOOGLE_PROTOBUF_INCLUDED_Mem_5fInfo_2eproto_2epb_2eh