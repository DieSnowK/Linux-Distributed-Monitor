// Generated by the protocol buffer compiler.  DO NOT EDIT!
// NO CHECKED-IN PROTOBUF GENCODE
// source: Cpu_Stat.proto
// Protobuf C++ Version: 5.27.2

#include "Cpu_Stat.pb.h"

#include <algorithm>
#include <type_traits>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/generated_message_tctable_impl.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace monitor {

inline constexpr CpuStat::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : cpu_name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()),
        cpu_percent_{0},
        usr_percent_{0},
        sys_percent_{0},
        nice_percent_{0},
        idle_percent_{0},
        io_wait_percent_{0},
        irq_percent_{0},
        soft_irq_percent_{0},
        _cached_size_{0} {}

template <typename>
PROTOBUF_CONSTEXPR CpuStat::CpuStat(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct CpuStatDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CpuStatDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~CpuStatDefaultTypeInternal() {}
  union {
    CpuStat _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CpuStatDefaultTypeInternal _CpuStat_default_instance_;
}  // namespace monitor
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_Cpu_5fStat_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_Cpu_5fStat_2eproto = nullptr;
const ::uint32_t
    TableStruct_Cpu_5fStat_2eproto::offsets[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
        protodesc_cold) = {
        ~0u,  // no _has_bits_
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _internal_metadata_),
        ~0u,  // no _extensions_
        ~0u,  // no _oneof_case_
        ~0u,  // no _weak_field_map_
        ~0u,  // no _inlined_string_donated_
        ~0u,  // no _split_
        ~0u,  // no sizeof(Split)
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.cpu_name_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.cpu_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.usr_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.sys_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.nice_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.idle_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.io_wait_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.irq_percent_),
        PROTOBUF_FIELD_OFFSET(::monitor::CpuStat, _impl_.soft_irq_percent_),
};

static const ::_pbi::MigrationSchema
    schemas[] ABSL_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
        {0, -1, -1, sizeof(::monitor::CpuStat)},
};
static const ::_pb::Message* const file_default_instances[] = {
    &::monitor::_CpuStat_default_instance_._instance,
};
const char descriptor_table_protodef_Cpu_5fStat_2eproto[] ABSL_ATTRIBUTE_SECTION_VARIABLE(
    protodesc_cold) = {
    "\n\016Cpu_Stat.proto\022\007monitor\"\316\001\n\007CpuStat\022\020\n"
    "\010cpu_name\030\001 \001(\t\022\023\n\013cpu_percent\030\002 \001(\002\022\023\n\013"
    "usr_percent\030\003 \001(\002\022\023\n\013sys_percent\030\004 \001(\002\022\024"
    "\n\014nice_percent\030\005 \001(\002\022\024\n\014idle_percent\030\006 \001"
    "(\002\022\027\n\017io_wait_percent\030\007 \001(\002\022\023\n\013irq_perce"
    "nt\030\010 \001(\002\022\030\n\020soft_irq_percent\030\t \001(\002b\006prot"
    "o3"
};
static ::absl::once_flag descriptor_table_Cpu_5fStat_2eproto_once;
PROTOBUF_CONSTINIT const ::_pbi::DescriptorTable descriptor_table_Cpu_5fStat_2eproto = {
    false,
    false,
    242,
    descriptor_table_protodef_Cpu_5fStat_2eproto,
    "Cpu_Stat.proto",
    &descriptor_table_Cpu_5fStat_2eproto_once,
    nullptr,
    0,
    1,
    schemas,
    file_default_instances,
    TableStruct_Cpu_5fStat_2eproto::offsets,
    file_level_enum_descriptors_Cpu_5fStat_2eproto,
    file_level_service_descriptors_Cpu_5fStat_2eproto,
};
namespace monitor {
// ===================================================================

class CpuStat::_Internal {
 public:
};

CpuStat::CpuStat(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:monitor.CpuStat)
}
inline PROTOBUF_NDEBUG_INLINE CpuStat::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from, const ::monitor::CpuStat& from_msg)
      : cpu_name_(arena, from.cpu_name_),
        _cached_size_{0} {}

CpuStat::CpuStat(
    ::google::protobuf::Arena* arena,
    const CpuStat& from)
    : ::google::protobuf::Message(arena) {
  CpuStat* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_, from);
  ::memcpy(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, cpu_percent_),
           reinterpret_cast<const char *>(&from._impl_) +
               offsetof(Impl_, cpu_percent_),
           offsetof(Impl_, soft_irq_percent_) -
               offsetof(Impl_, cpu_percent_) +
               sizeof(Impl_::soft_irq_percent_));

  // @@protoc_insertion_point(copy_constructor:monitor.CpuStat)
}
inline PROTOBUF_NDEBUG_INLINE CpuStat::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : cpu_name_(arena),
        _cached_size_{0} {}

inline void CpuStat::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
  ::memset(reinterpret_cast<char *>(&_impl_) +
               offsetof(Impl_, cpu_percent_),
           0,
           offsetof(Impl_, soft_irq_percent_) -
               offsetof(Impl_, cpu_percent_) +
               sizeof(Impl_::soft_irq_percent_));
}
CpuStat::~CpuStat() {
  // @@protoc_insertion_point(destructor:monitor.CpuStat)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void CpuStat::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.cpu_name_.Destroy();
  _impl_.~Impl_();
}

const ::google::protobuf::MessageLite::ClassData*
CpuStat::GetClassData() const {
  PROTOBUF_CONSTINIT static const ::google::protobuf::MessageLite::
      ClassDataFull _data_ = {
          {
              &_table_.header,
              nullptr,  // OnDemandRegisterArenaDtor
              nullptr,  // IsInitialized
              PROTOBUF_FIELD_OFFSET(CpuStat, _impl_._cached_size_),
              false,
          },
          &CpuStat::MergeImpl,
          &CpuStat::kDescriptorMethods,
          &descriptor_table_Cpu_5fStat_2eproto,
          nullptr,  // tracker
      };
  ::google::protobuf::internal::PrefetchToLocalCache(&_data_);
  ::google::protobuf::internal::PrefetchToLocalCache(_data_.tc_table);
  return _data_.base();
}
PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<4, 9, 0, 40, 2> CpuStat::_table_ = {
  {
    0,  // no _has_bits_
    0, // no _extensions_
    9, 120,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294966784,  // skipmap
    offsetof(decltype(_table_), field_entries),
    9,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_CpuStat_default_instance_._instance,
    nullptr,  // post_loop_handler
    ::_pbi::TcParser::GenericFallback,  // fallback
    #ifdef PROTOBUF_PREFETCH_PARSE_TABLE
    ::_pbi::TcParser::GetTable<::monitor::CpuStat>(),  // to_prefetch
    #endif  // PROTOBUF_PREFETCH_PARSE_TABLE
  }, {{
    {::_pbi::TcParser::MiniParse, {}},
    // string cpu_name = 1;
    {::_pbi::TcParser::FastUS1,
     {10, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_name_)}},
    // float cpu_percent = 2;
    {::_pbi::TcParser::FastF32S1,
     {21, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_)}},
    // float usr_percent = 3;
    {::_pbi::TcParser::FastF32S1,
     {29, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.usr_percent_)}},
    // float sys_percent = 4;
    {::_pbi::TcParser::FastF32S1,
     {37, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.sys_percent_)}},
    // float nice_percent = 5;
    {::_pbi::TcParser::FastF32S1,
     {45, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.nice_percent_)}},
    // float idle_percent = 6;
    {::_pbi::TcParser::FastF32S1,
     {53, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.idle_percent_)}},
    // float io_wait_percent = 7;
    {::_pbi::TcParser::FastF32S1,
     {61, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.io_wait_percent_)}},
    // float irq_percent = 8;
    {::_pbi::TcParser::FastF32S1,
     {69, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.irq_percent_)}},
    // float soft_irq_percent = 9;
    {::_pbi::TcParser::FastF32S1,
     {77, 63, 0, PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_)}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
    {::_pbi::TcParser::MiniParse, {}},
  }}, {{
    65535, 65535
  }}, {{
    // string cpu_name = 1;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_name_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kUtf8String | ::_fl::kRepAString)},
    // float cpu_percent = 2;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float usr_percent = 3;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.usr_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float sys_percent = 4;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.sys_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float nice_percent = 5;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.nice_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float idle_percent = 6;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.idle_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float io_wait_percent = 7;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.io_wait_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float irq_percent = 8;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.irq_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
    // float soft_irq_percent = 9;
    {PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_), 0, 0,
    (0 | ::_fl::kFcSingular | ::_fl::kFloat)},
  }},
  // no aux_entries
  {{
    "\17\10\0\0\0\0\0\0\0\0\0\0\0\0\0\0"
    "monitor.CpuStat"
    "cpu_name"
  }},
};

PROTOBUF_NOINLINE void CpuStat::Clear() {
// @@protoc_insertion_point(message_clear_start:monitor.CpuStat)
  ::google::protobuf::internal::TSanWrite(&_impl_);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.cpu_name_.ClearToEmpty();
  ::memset(&_impl_.cpu_percent_, 0, static_cast<::size_t>(
      reinterpret_cast<char*>(&_impl_.soft_irq_percent_) -
      reinterpret_cast<char*>(&_impl_.cpu_percent_)) + sizeof(_impl_.soft_irq_percent_));
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

::uint8_t* CpuStat::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:monitor.CpuStat)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  // string cpu_name = 1;
  if (!this->_internal_cpu_name().empty()) {
    const std::string& _s = this->_internal_cpu_name();
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::google::protobuf::internal::WireFormatLite::SERIALIZE, "monitor.CpuStat.cpu_name");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  // float cpu_percent = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = this->_internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        2, this->_internal_cpu_percent(), target);
  }

  // float usr_percent = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = this->_internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        3, this->_internal_usr_percent(), target);
  }

  // float sys_percent = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_sys_percent = this->_internal_sys_percent();
  ::uint32_t raw_sys_percent;
  memcpy(&raw_sys_percent, &tmp_sys_percent, sizeof(tmp_sys_percent));
  if (raw_sys_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        4, this->_internal_sys_percent(), target);
  }

  // float nice_percent = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = this->_internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        5, this->_internal_nice_percent(), target);
  }

  // float idle_percent = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = this->_internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        6, this->_internal_idle_percent(), target);
  }

  // float io_wait_percent = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = this->_internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        7, this->_internal_io_wait_percent(), target);
  }

  // float irq_percent = 8;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = this->_internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        8, this->_internal_irq_percent(), target);
  }

  // float soft_irq_percent = 9;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = this->_internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(
        9, this->_internal_soft_irq_percent(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:monitor.CpuStat)
  return target;
}

::size_t CpuStat::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:monitor.CpuStat)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::_pbi::Prefetch5LinesFrom7Lines(reinterpret_cast<const void*>(this));
  // string cpu_name = 1;
  if (!this->_internal_cpu_name().empty()) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::StringSize(
                                    this->_internal_cpu_name());
  }

  // float cpu_percent = 2;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = this->_internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    total_size += 5;
  }

  // float usr_percent = 3;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = this->_internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    total_size += 5;
  }

  // float sys_percent = 4;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_sys_percent = this->_internal_sys_percent();
  ::uint32_t raw_sys_percent;
  memcpy(&raw_sys_percent, &tmp_sys_percent, sizeof(tmp_sys_percent));
  if (raw_sys_percent != 0) {
    total_size += 5;
  }

  // float nice_percent = 5;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = this->_internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    total_size += 5;
  }

  // float idle_percent = 6;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = this->_internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    total_size += 5;
  }

  // float io_wait_percent = 7;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = this->_internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    total_size += 5;
  }

  // float irq_percent = 8;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = this->_internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    total_size += 5;
  }

  // float soft_irq_percent = 9;
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = this->_internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    total_size += 5;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}


void CpuStat::MergeImpl(::google::protobuf::MessageLite& to_msg, const ::google::protobuf::MessageLite& from_msg) {
  auto* const _this = static_cast<CpuStat*>(&to_msg);
  auto& from = static_cast<const CpuStat&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:monitor.CpuStat)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_cpu_name().empty()) {
    _this->_internal_set_cpu_name(from._internal_cpu_name());
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_cpu_percent = from._internal_cpu_percent();
  ::uint32_t raw_cpu_percent;
  memcpy(&raw_cpu_percent, &tmp_cpu_percent, sizeof(tmp_cpu_percent));
  if (raw_cpu_percent != 0) {
    _this->_impl_.cpu_percent_ = from._impl_.cpu_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_usr_percent = from._internal_usr_percent();
  ::uint32_t raw_usr_percent;
  memcpy(&raw_usr_percent, &tmp_usr_percent, sizeof(tmp_usr_percent));
  if (raw_usr_percent != 0) {
    _this->_impl_.usr_percent_ = from._impl_.usr_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_sys_percent = from._internal_sys_percent();
  ::uint32_t raw_sys_percent;
  memcpy(&raw_sys_percent, &tmp_sys_percent, sizeof(tmp_sys_percent));
  if (raw_sys_percent != 0) {
    _this->_impl_.sys_percent_ = from._impl_.sys_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_nice_percent = from._internal_nice_percent();
  ::uint32_t raw_nice_percent;
  memcpy(&raw_nice_percent, &tmp_nice_percent, sizeof(tmp_nice_percent));
  if (raw_nice_percent != 0) {
    _this->_impl_.nice_percent_ = from._impl_.nice_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_idle_percent = from._internal_idle_percent();
  ::uint32_t raw_idle_percent;
  memcpy(&raw_idle_percent, &tmp_idle_percent, sizeof(tmp_idle_percent));
  if (raw_idle_percent != 0) {
    _this->_impl_.idle_percent_ = from._impl_.idle_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_io_wait_percent = from._internal_io_wait_percent();
  ::uint32_t raw_io_wait_percent;
  memcpy(&raw_io_wait_percent, &tmp_io_wait_percent, sizeof(tmp_io_wait_percent));
  if (raw_io_wait_percent != 0) {
    _this->_impl_.io_wait_percent_ = from._impl_.io_wait_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_irq_percent = from._internal_irq_percent();
  ::uint32_t raw_irq_percent;
  memcpy(&raw_irq_percent, &tmp_irq_percent, sizeof(tmp_irq_percent));
  if (raw_irq_percent != 0) {
    _this->_impl_.irq_percent_ = from._impl_.irq_percent_;
  }
  static_assert(sizeof(::uint32_t) == sizeof(float),
                "Code assumes ::uint32_t and float are the same size.");
  float tmp_soft_irq_percent = from._internal_soft_irq_percent();
  ::uint32_t raw_soft_irq_percent;
  memcpy(&raw_soft_irq_percent, &tmp_soft_irq_percent, sizeof(tmp_soft_irq_percent));
  if (raw_soft_irq_percent != 0) {
    _this->_impl_.soft_irq_percent_ = from._impl_.soft_irq_percent_;
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void CpuStat::CopyFrom(const CpuStat& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:monitor.CpuStat)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}


void CpuStat::InternalSwap(CpuStat* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.cpu_name_, &other->_impl_.cpu_name_, arena);
  ::google::protobuf::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.soft_irq_percent_)
      + sizeof(CpuStat::_impl_.soft_irq_percent_)
      - PROTOBUF_FIELD_OFFSET(CpuStat, _impl_.cpu_percent_)>(
          reinterpret_cast<char*>(&_impl_.cpu_percent_),
          reinterpret_cast<char*>(&other->_impl_.cpu_percent_));
}

::google::protobuf::Metadata CpuStat::GetMetadata() const {
  return ::google::protobuf::Message::GetMetadataImpl(GetClassData()->full());
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace monitor
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::std::false_type
    _static_init2_ PROTOBUF_UNUSED =
        (::_pbi::AddDescriptors(&descriptor_table_Cpu_5fStat_2eproto),
         ::std::false_type{});
#include "google/protobuf/port_undef.inc"
