// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: keypoints.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "keypoints.pb.h"

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

namespace kp {

namespace {

const ::google::protobuf::Descriptor *all_kp_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection *
    all_kp_reflection_ = NULL;
const ::google::protobuf::Descriptor *Keypoint_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection *
    Keypoint_reflection_ = NULL;

}  // namespace

void protobuf_AssignDesc_keypoints_2eproto() {
  protobuf_AddDesc_keypoints_2eproto();
  const ::google::protobuf::FileDescriptor *file =
      ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
          "keypoints.proto");
  GOOGLE_CHECK(file != NULL);
  all_kp_descriptor_ = file->message_type(0);
  static const int all_kp_offsets_[2] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(all_kp, size_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(all_kp, keypoint_),
  };
  all_kp_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          all_kp_descriptor_, all_kp::default_instance_, all_kp_offsets_,
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(all_kp, _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(all_kp,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(all_kp));
  Keypoint_descriptor_ = file->message_type(1);
  static const int Keypoint_offsets_[7] = {
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, x_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, y_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, size_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, angle_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, response_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, octave_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint, class_id_),
  };
  Keypoint_reflection_ =
      new ::google::protobuf::internal::GeneratedMessageReflection(
          Keypoint_descriptor_, Keypoint::default_instance_, Keypoint_offsets_,
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint,
                                                         _has_bits_[0]),
          GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Keypoint,
                                                         _unknown_fields_),
          -1, ::google::protobuf::DescriptorPool::generated_pool(),
          ::google::protobuf::MessageFactory::generated_factory(),
          sizeof(Keypoint));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                                     &protobuf_AssignDesc_keypoints_2eproto);
}

void protobuf_RegisterTypes(const ::std::string &) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      all_kp_descriptor_, &all_kp::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Keypoint_descriptor_, &Keypoint::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_keypoints_2eproto() {
  delete all_kp::default_instance_;
  delete all_kp_reflection_;
  delete Keypoint::default_instance_;
  delete Keypoint_reflection_;
}

void protobuf_AddDesc_keypoints_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      "\n\017keypoints.proto\022\002kp\"6\n\006all_kp\022\014\n\004size\030"
      "\001 \002(\r\022\036\n\010keypoint\030\002 "
      "\003(\0132\014.kp.Keypoint\"q\n"
      "\010Keypoint\022\t\n\001x\030\001 \002(\002\022\t\n\001y\030\002 "
      "\002(\002\022\014\n\004size\030"
      "\003 \002(\002\022\r\n\005angle\030\004 "
      "\002(\002\022\020\n\010response\030\005 \002(\002\022\016"
      "\n\006octave\030\006 \002(\005\022\020\n\010class_id\030\007 \002(\005",
      192);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
      "keypoints.proto", &protobuf_RegisterTypes);
  all_kp::default_instance_ = new all_kp();
  Keypoint::default_instance_ = new Keypoint();
  all_kp::default_instance_->InitAsDefaultInstance();
  Keypoint::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(
      &protobuf_ShutdownFile_keypoints_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_keypoints_2eproto {
  StaticDescriptorInitializer_keypoints_2eproto() {
    protobuf_AddDesc_keypoints_2eproto();
  }
} static_descriptor_initializer_keypoints_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int all_kp::kSizeFieldNumber;
const int all_kp::kKeypointFieldNumber;
#endif  // !_MSC_VER

all_kp::all_kp() : ::google::protobuf::Message() { SharedCtor(); }

void all_kp::InitAsDefaultInstance() {}

all_kp::all_kp(const all_kp &from) : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void all_kp::SharedCtor() {
  _cached_size_ = 0;
  size_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

all_kp::~all_kp() { SharedDtor(); }

void all_kp::SharedDtor() {
  if (this != default_instance_) {
  }
}

void all_kp::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor *all_kp::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return all_kp_descriptor_;
}

const all_kp &all_kp::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_keypoints_2eproto();
  return *default_instance_;
}

all_kp *all_kp::default_instance_ = NULL;

all_kp *all_kp::New() const { return new all_kp; }

void all_kp::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    size_ = 0u;
  }
  keypoint_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool all_kp::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream *input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 size = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              ::google::protobuf::uint32,
              ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
              input, &size_)));
          set_has_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_keypoint;
        break;
      }

      // repeated .kp.Keypoint keypoint = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::
                WIRETYPE_LENGTH_DELIMITED) {
        parse_keypoint:
          DO_(::google::protobuf::internal::WireFormatLite::
                  ReadMessageNoVirtual(input, add_keypoint()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_keypoint;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void all_kp::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream *output) const {
  // required uint32 size = 1;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->size(),
                                                              output);
  }

  // repeated .kp.Keypoint keypoint = 2;
  for (int i = 0; i < this->keypoint_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
        2, this->keypoint(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8 *all_kp::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8 *target) const {
  // required uint32 size = 1;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(
        1, this->size(), target);
  }

  // repeated .kp.Keypoint keypoint = 2;
  for (int i = 0; i < this->keypoint_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
        WriteMessageNoVirtualToArray(2, this->keypoint(i), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int all_kp::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 size = 1;
    if (has_size()) {
      total_size +=
          1 + ::google::protobuf::internal::WireFormatLite::UInt32Size(
                  this->size());
    }
  }
  // repeated .kp.Keypoint keypoint = 2;
  total_size += 1 * this->keypoint_size();
  for (int i = 0; i < this->keypoint_size(); i++) {
    total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
            this->keypoint(i));
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

void all_kp::MergeFrom(const ::google::protobuf::Message &from) {
  GOOGLE_CHECK_NE(&from, this);
  const all_kp *source =
      ::google::protobuf::internal::dynamic_cast_if_available<const all_kp *>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void all_kp::MergeFrom(const all_kp &from) {
  GOOGLE_CHECK_NE(&from, this);
  keypoint_.MergeFrom(from.keypoint_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_size()) {
      set_size(from.size());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void all_kp::CopyFrom(const ::google::protobuf::Message &from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void all_kp::CopyFrom(const all_kp &from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool all_kp::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  for (int i = 0; i < keypoint_size(); i++) {
    if (!this->keypoint(i).IsInitialized()) return false;
  }
  return true;
}

void all_kp::Swap(all_kp *other) {
  if (other != this) {
    std::swap(size_, other->size_);
    keypoint_.Swap(&other->keypoint_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata all_kp::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = all_kp_descriptor_;
  metadata.reflection = all_kp_reflection_;
  return metadata;
}

// ===================================================================

#ifndef _MSC_VER
const int Keypoint::kXFieldNumber;
const int Keypoint::kYFieldNumber;
const int Keypoint::kSizeFieldNumber;
const int Keypoint::kAngleFieldNumber;
const int Keypoint::kResponseFieldNumber;
const int Keypoint::kOctaveFieldNumber;
const int Keypoint::kClassIdFieldNumber;
#endif  // !_MSC_VER

Keypoint::Keypoint() : ::google::protobuf::Message() { SharedCtor(); }

void Keypoint::InitAsDefaultInstance() {}

Keypoint::Keypoint(const Keypoint &from) : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Keypoint::SharedCtor() {
  _cached_size_ = 0;
  x_ = 0;
  y_ = 0;
  size_ = 0;
  angle_ = 0;
  response_ = 0;
  octave_ = 0;
  class_id_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Keypoint::~Keypoint() { SharedDtor(); }

void Keypoint::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Keypoint::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor *Keypoint::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Keypoint_descriptor_;
}

const Keypoint &Keypoint::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_keypoints_2eproto();
  return *default_instance_;
}

Keypoint *Keypoint::default_instance_ = NULL;

Keypoint *Keypoint::New() const { return new Keypoint; }

void Keypoint::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    x_ = 0;
    y_ = 0;
    size_ = 0;
    angle_ = 0;
    response_ = 0;
    octave_ = 0;
    class_id_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Keypoint::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream *input) {
#define DO_(EXPRESSION) \
  if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (
        ::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required float x = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
              input, &x_)));
          set_has_x();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(21)) goto parse_y;
        break;
      }

      // required float y = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
        parse_y:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
              input, &y_)));
          set_has_y();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(29)) goto parse_size;
        break;
      }

      // required float size = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
        parse_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
              input, &size_)));
          set_has_size();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(37)) goto parse_angle;
        break;
      }

      // required float angle = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
        parse_angle:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
              input, &angle_)));
          set_has_angle();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(45)) goto parse_response;
        break;
      }

      // required float response = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_FIXED32) {
        parse_response:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
              input, &response_)));
          set_has_response();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_octave;
        break;
      }

      // required int32 octave = 6;
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
        parse_octave:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              ::google::protobuf::int32,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &octave_)));
          set_has_octave();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_class_id;
        break;
      }

      // required int32 class_id = 7;
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
        parse_class_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
              ::google::protobuf::int32,
              ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
              input, &class_id_)));
          set_has_class_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
            input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Keypoint::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream *output) const {
  // required float x = 1;
  if (has_x()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->x(),
                                                             output);
  }

  // required float y = 2;
  if (has_y()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(2, this->y(),
                                                             output);
  }

  // required float size = 3;
  if (has_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(3, this->size(),
                                                             output);
  }

  // required float angle = 4;
  if (has_angle()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(4, this->angle(),
                                                             output);
  }

  // required float response = 5;
  if (has_response()) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(
        5, this->response(), output);
  }

  // required int32 octave = 6;
  if (has_octave()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->octave(),
                                                             output);
  }

  // required int32 class_id = 7;
  if (has_class_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
        7, this->class_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8 *Keypoint::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8 *target) const {
  // required float x = 1;
  if (has_x()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(
        1, this->x(), target);
  }

  // required float y = 2;
  if (has_y()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(
        2, this->y(), target);
  }

  // required float size = 3;
  if (has_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(
        3, this->size(), target);
  }

  // required float angle = 4;
  if (has_angle()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(
        4, this->angle(), target);
  }

  // required float response = 5;
  if (has_response()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(
        5, this->response(), target);
  }

  // required int32 octave = 6;
  if (has_octave()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        6, this->octave(), target);
  }

  // required int32 class_id = 7;
  if (has_class_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(
        7, this->class_id(), target);
  }

  if (!unknown_fields().empty()) {
    target =
        ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
            unknown_fields(), target);
  }
  return target;
}

int Keypoint::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required float x = 1;
    if (has_x()) {
      total_size += 1 + 4;
    }

    // required float y = 2;
    if (has_y()) {
      total_size += 1 + 4;
    }

    // required float size = 3;
    if (has_size()) {
      total_size += 1 + 4;
    }

    // required float angle = 4;
    if (has_angle()) {
      total_size += 1 + 4;
    }

    // required float response = 5;
    if (has_response()) {
      total_size += 1 + 4;
    }

    // required int32 octave = 6;
    if (has_octave()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::Int32Size(
                            this->octave());
    }

    // required int32 class_id = 7;
    if (has_class_id()) {
      total_size += 1 + ::google::protobuf::internal::WireFormatLite::Int32Size(
                            this->class_id());
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

void Keypoint::MergeFrom(const ::google::protobuf::Message &from) {
  GOOGLE_CHECK_NE(&from, this);
  const Keypoint *source =
      ::google::protobuf::internal::dynamic_cast_if_available<const Keypoint *>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Keypoint::MergeFrom(const Keypoint &from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_x()) {
      set_x(from.x());
    }
    if (from.has_y()) {
      set_y(from.y());
    }
    if (from.has_size()) {
      set_size(from.size());
    }
    if (from.has_angle()) {
      set_angle(from.angle());
    }
    if (from.has_response()) {
      set_response(from.response());
    }
    if (from.has_octave()) {
      set_octave(from.octave());
    }
    if (from.has_class_id()) {
      set_class_id(from.class_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Keypoint::CopyFrom(const ::google::protobuf::Message &from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Keypoint::CopyFrom(const Keypoint &from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Keypoint::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000007f) != 0x0000007f) return false;

  return true;
}

void Keypoint::Swap(Keypoint *other) {
  if (other != this) {
    std::swap(x_, other->x_);
    std::swap(y_, other->y_);
    std::swap(size_, other->size_);
    std::swap(angle_, other->angle_);
    std::swap(response_, other->response_);
    std::swap(octave_, other->octave_);
    std::swap(class_id_, other->class_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Keypoint::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Keypoint_descriptor_;
  metadata.reflection = Keypoint_reflection_;
  return metadata;
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace kp

// @@protoc_insertion_point(global_scope)