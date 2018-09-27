/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */
#pragma once

#include <memory>
#include <string>
#include <utility>

#include <folly/Optional.h>
#include <folly/io/IOBuf.h>
#include <mcrouter/lib/carbon/CarbonProtocolReader.h>
#include <mcrouter/lib/carbon/CarbonProtocolWriter.h>
#include <mcrouter/lib/carbon/CommonSerializationTraits.h>
#include <mcrouter/lib/carbon/Keys.h>
#include <mcrouter/lib/carbon/ReplyCommon.h>
#include <mcrouter/lib/carbon/RequestCommon.h>
#include <mcrouter/lib/carbon/RequestReplyUtil.h>
#include <mcrouter/lib/carbon/Result.h>
#include <mcrouter/lib/carbon/TypeList.h>
#include <mcrouter/lib/carbon/Variant.h>

#include "mcrouter/lib/carbon/test/a/gen/AMessages.h"
#include "mcrouter/lib/network/gen/CommonMessages.h"

#include "folly/container/F14Map.h"
#include "folly/container/F14Set.h"
#include "mcrouter/lib/carbon/test/TestUserType.h"

namespace carbon {
namespace test {

class TestReply;

class TestRequest : public carbon::RequestCommon {
 public:
  using reply_type = TestReply;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 69;
  static constexpr const char* name = "test";

  TestRequest() = default;
  TestRequest(const TestRequest&) = default;
  TestRequest& operator=(const TestRequest&) = default;
  TestRequest(TestRequest&&) = default;
  TestRequest& operator=(TestRequest&&) = default;
  explicit TestRequest(folly::StringPiece sp) : key_(sp) {}
  explicit TestRequest(folly::IOBuf&& carbonKey) : key_(std::move(carbonKey)) {}

  SimpleStruct& asBase() {
    markBufferAsDirty();
    return _carbon_simplestruct_;
  }
  const SimpleStruct& asBase() const {
    return _carbon_simplestruct_;
  }
  BaseStruct& asBaseStruct() {
    markBufferAsDirty();
    return asBase().asBaseStruct();
  }
  const BaseStruct& asBaseStruct() const {
    return asBase().asBaseStruct();
  }
  int32_t int32Member() const {
    return _carbon_simplestruct_.int32Member();
  }
  int32_t& int32Member() {
    markBufferAsDirty();
    return _carbon_simplestruct_.int32Member();
  }
  const std::string& stringMember() const {
    return _carbon_simplestruct_.stringMember();
  }
  std::string& stringMember() {
    markBufferAsDirty();
    return _carbon_simplestruct_.stringMember();
  }
  const test2::util::SimpleEnum& enumMember() const {
    return _carbon_simplestruct_.enumMember();
  }
  test2::util::SimpleEnum& enumMember() {
    markBufferAsDirty();
    return _carbon_simplestruct_.enumMember();
  }
  const std::vector<test2::util::SimpleStruct>& vectorMember() const {
    return _carbon_simplestruct_.vectorMember();
  }
  std::vector<test2::util::SimpleStruct>& vectorMember() {
    markBufferAsDirty();
    return _carbon_simplestruct_.vectorMember();
  }
  int64_t baseInt64Member() const {
    return _carbon_simplestruct_.baseInt64Member();
  }
  int64_t& baseInt64Member() {
    markBufferAsDirty();
    return _carbon_simplestruct_.baseInt64Member();
  }
  const carbon::Keys<folly::IOBuf>& key() const {
    return key_;
  }
  carbon::Keys<folly::IOBuf>& key() {
    markBufferAsDirty();
    return key_;
  }
  const test2::util::SimpleEnum& testEnum() const {
    return testEnum_;
  }
  test2::util::SimpleEnum& testEnum() {
    markBufferAsDirty();
    return testEnum_;
  }
  bool testBool() const {
    return testBool_;
  }
  bool& testBool() {
    markBufferAsDirty();
    return testBool_;
  }
  char testChar() const {
    return testChar_;
  }
  char& testChar() {
    markBufferAsDirty();
    return testChar_;
  }
  int8_t testInt8() const {
    return testInt8_;
  }
  int8_t& testInt8() {
    markBufferAsDirty();
    return testInt8_;
  }
  int16_t testInt16() const {
    return testInt16_;
  }
  int16_t& testInt16() {
    markBufferAsDirty();
    return testInt16_;
  }
  int32_t testInt32() const {
    return testInt32_;
  }
  int32_t& testInt32() {
    markBufferAsDirty();
    return testInt32_;
  }
  int64_t testInt64() const {
    return testInt64_;
  }
  int64_t& testInt64() {
    markBufferAsDirty();
    return testInt64_;
  }
  uint8_t testUInt8() const {
    return testUInt8_;
  }
  uint8_t& testUInt8() {
    markBufferAsDirty();
    return testUInt8_;
  }
  uint16_t testUInt16() const {
    return testUInt16_;
  }
  uint16_t& testUInt16() {
    markBufferAsDirty();
    return testUInt16_;
  }
  uint32_t testUInt32() const {
    return testUInt32_;
  }
  uint32_t& testUInt32() {
    markBufferAsDirty();
    return testUInt32_;
  }
  uint64_t testUInt64() const {
    return testUInt64_;
  }
  uint64_t& testUInt64() {
    markBufferAsDirty();
    return testUInt64_;
  }
  float testFloat() const {
    return testFloat_;
  }
  float& testFloat() {
    markBufferAsDirty();
    return testFloat_;
  }
  double testDouble() const {
    return testDouble_;
  }
  double& testDouble() {
    markBufferAsDirty();
    return testDouble_;
  }
  const std::string& testShortString() const {
    return testShortString_;
  }
  std::string& testShortString() {
    markBufferAsDirty();
    return testShortString_;
  }
  const std::string& testLongString() const {
    return testLongString_;
  }
  std::string& testLongString() {
    markBufferAsDirty();
    return testLongString_;
  }
  const folly::IOBuf& testIobuf() const {
    return testIobuf_;
  }
  folly::IOBuf& testIobuf() {
    markBufferAsDirty();
    return testIobuf_;
  }
  const SimpleStruct& testStruct() const {
    return testStruct_;
  }
  SimpleStruct& testStruct() {
    markBufferAsDirty();
    return testStruct_;
  }
  const std::vector<std::string>& testList() const {
    return testList_;
  }
  std::vector<std::string>& testList() {
    markBufferAsDirty();
    return testList_;
  }
  const folly::Optional<std::string>& testOptionalString() const {
    return testOptionalString_;
  }
  folly::Optional<std::string>& testOptionalString() {
    markBufferAsDirty();
    return testOptionalString_;
  }
  const folly::Optional<folly::IOBuf>& testOptionalIobuf() const {
    return testOptionalIobuf_;
  }
  folly::Optional<folly::IOBuf>& testOptionalIobuf() {
    markBufferAsDirty();
    return testOptionalIobuf_;
  }
  const std::vector<test2::util::SimpleEnum>& testEnumVec() const {
    return testEnumVec_;
  }
  std::vector<test2::util::SimpleEnum>& testEnumVec() {
    markBufferAsDirty();
    return testEnumVec_;
  }
  const test2::util::SimpleUnion& testUnion() const {
    return testUnion_;
  }
  test2::util::SimpleUnion& testUnion() {
    markBufferAsDirty();
    return testUnion_;
  }
  const std::vector<std::vector<uint64_t>>& testNestedVec() const {
    return testNestedVec_;
  }
  std::vector<std::vector<uint64_t>>& testNestedVec() {
    markBufferAsDirty();
    return testNestedVec_;
  }
  const std::unordered_map<std::string, std::string>& testUMap() const {
    return testUMap_;
  }
  std::unordered_map<std::string, std::string>& testUMap() {
    markBufferAsDirty();
    return testUMap_;
  }
  const std::map<double, double>& testMap() const {
    return testMap_;
  }
  std::map<double, double>& testMap() {
    markBufferAsDirty();
    return testMap_;
  }
  const std::map<std::string, std::vector<uint16_t>>& testComplexMap() const {
    return testComplexMap_;
  }
  std::map<std::string, std::vector<uint16_t>>& testComplexMap() {
    markBufferAsDirty();
    return testComplexMap_;
  }
  const std::unordered_set<std::string>& testUSet() const {
    return testUSet_;
  }
  std::unordered_set<std::string>& testUSet() {
    markBufferAsDirty();
    return testUSet_;
  }
  const std::set<uint64_t>& testSet() const {
    return testSet_;
  }
  std::set<uint64_t>& testSet() {
    markBufferAsDirty();
    return testSet_;
  }
  const folly::Optional<bool>& testOptionalBool() const {
    return testOptionalBool_;
  }
  folly::Optional<bool>& testOptionalBool() {
    markBufferAsDirty();
    return testOptionalBool_;
  }
  const std::vector<folly::Optional<std::string>>& testOptionalVec() const {
    return testOptionalVec_;
  }
  std::vector<folly::Optional<std::string>>& testOptionalVec() {
    markBufferAsDirty();
    return testOptionalVec_;
  }
  const std::vector<folly::IOBuf>& testIOBufList() const {
    return testIOBufList_;
  }
  std::vector<folly::IOBuf>& testIOBufList() {
    markBufferAsDirty();
    return testIOBufList_;
  }
  const folly::F14FastMap<std::string, std::string>& testF14FastMap() const {
    return testF14FastMap_;
  }
  folly::F14FastMap<std::string, std::string>& testF14FastMap() {
    markBufferAsDirty();
    return testF14FastMap_;
  }
  const folly::F14NodeMap<std::string, std::string>& testF14NodeMap() const {
    return testF14NodeMap_;
  }
  folly::F14NodeMap<std::string, std::string>& testF14NodeMap() {
    markBufferAsDirty();
    return testF14NodeMap_;
  }
  const folly::F14ValueMap<std::string, std::string>& testF14ValueMap() const {
    return testF14ValueMap_;
  }
  folly::F14ValueMap<std::string, std::string>& testF14ValueMap() {
    markBufferAsDirty();
    return testF14ValueMap_;
  }
  const folly::F14VectorMap<std::string, std::string>& testF14VectorMap()
      const {
    return testF14VectorMap_;
  }
  folly::F14VectorMap<std::string, std::string>& testF14VectorMap() {
    markBufferAsDirty();
    return testF14VectorMap_;
  }
  const folly::F14FastSet<std::string>& testF14FastSet() const {
    return testF14FastSet_;
  }
  folly::F14FastSet<std::string>& testF14FastSet() {
    markBufferAsDirty();
    return testF14FastSet_;
  }
  const folly::F14NodeSet<std::string>& testF14NodeSet() const {
    return testF14NodeSet_;
  }
  folly::F14NodeSet<std::string>& testF14NodeSet() {
    markBufferAsDirty();
    return testF14NodeSet_;
  }
  const folly::F14ValueSet<std::string>& testF14ValueSet() const {
    return testF14ValueSet_;
  }
  folly::F14ValueSet<std::string>& testF14ValueSet() {
    markBufferAsDirty();
    return testF14ValueSet_;
  }
  const folly::F14VectorSet<std::string>& testF14VectorSet() const {
    return testF14VectorSet_;
  }
  folly::F14VectorSet<std::string>& testF14VectorSet() {
    markBufferAsDirty();
    return testF14VectorSet_;
  }
  const UserType& testType() const {
    return testType_;
  }
  UserType& testType() {
    markBufferAsDirty();
    return testType_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  SimpleStruct _carbon_simplestruct_;
  carbon::Keys<folly::IOBuf> key_;
  test2::util::SimpleEnum testEnum_{test2::util::SimpleEnum::Twenty};
  int64_t testInt64_{0};
  uint64_t testUInt64_{0};
  double testDouble_{0.0};
  std::string testShortString_;
  std::string testLongString_;
  folly::IOBuf testIobuf_;
  SimpleStruct testStruct_;
  std::vector<std::string> testList_;
  folly::Optional<std::string> testOptionalString_;
  folly::Optional<folly::IOBuf> testOptionalIobuf_;
  std::vector<test2::util::SimpleEnum> testEnumVec_;
  test2::util::SimpleUnion testUnion_;
  std::vector<std::vector<uint64_t>> testNestedVec_;
  std::unordered_map<std::string, std::string> testUMap_;
  std::map<double, double> testMap_;
  std::map<std::string, std::vector<uint16_t>> testComplexMap_;
  std::unordered_set<std::string> testUSet_;
  std::set<uint64_t> testSet_;
  folly::Optional<bool> testOptionalBool_;
  std::vector<folly::Optional<std::string>> testOptionalVec_;
  std::vector<folly::IOBuf> testIOBufList_;
  folly::F14FastMap<std::string, std::string> testF14FastMap_;
  folly::F14NodeMap<std::string, std::string> testF14NodeMap_;
  folly::F14ValueMap<std::string, std::string> testF14ValueMap_;
  folly::F14VectorMap<std::string, std::string> testF14VectorMap_;
  folly::F14FastSet<std::string> testF14FastSet_;
  folly::F14NodeSet<std::string> testF14NodeSet_;
  folly::F14ValueSet<std::string> testF14ValueSet_;
  folly::F14VectorSet<std::string> testF14VectorSet_;
  UserType testType_;
  int32_t testInt32_{0};
  uint32_t testUInt32_{0};
  float testFloat_{0.0};
  int16_t testInt16_{0};
  uint16_t testUInt16_{0};
  bool testBool_{false};
  char testChar_{'\0'};
  int8_t testInt8_{0};
  uint8_t testUInt8_{0};
};

class TestReply : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 70;

  TestReply() = default;
  TestReply(const TestReply&) = default;
  TestReply& operator=(const TestReply&) = default;
  TestReply(TestReply&&) = default;
  TestReply& operator=(TestReply&&) = default;
  explicit TestReply(carbon::Result carbonResult) : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  int32_t valInt32() const {
    return valInt32_;
  }
  int32_t& valInt32() {
    return valInt32_;
  }
  int64_t valInt64() const {
    return valInt64_;
  }
  int64_t& valInt64() {
    return valInt64_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  int64_t valInt64_{0};
  int32_t valInt32_{0};
  carbon::Result result_{mc_res_unknown};
};

class TestReplyStringKey;

class TestRequestStringKey : public carbon::RequestCommon {
 public:
  using reply_type = TestReplyStringKey;
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = true;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 71;
  static constexpr const char* name = "testStringKey";

  TestRequestStringKey() = default;
  TestRequestStringKey(const TestRequestStringKey&) = default;
  TestRequestStringKey& operator=(const TestRequestStringKey&) = default;
  TestRequestStringKey(TestRequestStringKey&&) = default;
  TestRequestStringKey& operator=(TestRequestStringKey&&) = default;
  explicit TestRequestStringKey(folly::StringPiece sp) : key_(sp) {}
  explicit TestRequestStringKey(std::string&& carbonKey)
      : key_(std::move(carbonKey)) {}
  explicit TestRequestStringKey(const char* key) : key_(key) {}

  const carbon::Keys<std::string>& key() const {
    return key_;
  }
  carbon::Keys<std::string>& key() {
    markBufferAsDirty();
    return key_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Keys<std::string> key_;
};

class TestReplyStringKey : public carbon::ReplyCommon {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;
  static constexpr size_t typeId = 72;

  TestReplyStringKey() = default;
  TestReplyStringKey(const TestReplyStringKey&) = default;
  TestReplyStringKey& operator=(const TestReplyStringKey&) = default;
  TestReplyStringKey(TestReplyStringKey&&) = default;
  TestReplyStringKey& operator=(TestReplyStringKey&&) = default;
  explicit TestReplyStringKey(carbon::Result carbonResult)
      : result_(carbonResult) {}

  carbon::Result result() const {
    return result_;
  }
  carbon::Result& result() {
    return result_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  carbon::Result result_{mc_res_unknown};
};

class TestOptionalBool {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  TestOptionalBool() = default;
  TestOptionalBool(const TestOptionalBool&) = default;
  TestOptionalBool& operator=(const TestOptionalBool&) = default;
  TestOptionalBool(TestOptionalBool&&) = default;
  TestOptionalBool& operator=(TestOptionalBool&&) = default;

  const folly::Optional<bool>& optionalBool() const {
    return optionalBool_;
  }
  folly::Optional<bool>& optionalBool() {
    return optionalBool_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  folly::Optional<bool> optionalBool_;
};

class TestOptionalUnion {
 private:
  using _IdTypeMap = carbon::List<
      facebook::memcache::KV<1, folly::Optional<int64_t>>,
      facebook::memcache::KV<2, folly::Optional<bool>>,
      facebook::memcache::KV<3, folly::Optional<std::string>>>;

 public:
  enum class ValueType : uint32_t {
    EMPTY = 0,
    UMEMBER1 = 1,
    UMEMBER2 = 2,
    UMEMBER3 = 3
  };

  TestOptionalUnion() = default;
  TestOptionalUnion(const TestOptionalUnion&) = default;
  TestOptionalUnion& operator=(const TestOptionalUnion&) = default;
  TestOptionalUnion(TestOptionalUnion&&) = default;
  TestOptionalUnion& operator=(TestOptionalUnion&&) = default;

  ValueType which() const {
    return static_cast<ValueType>(_which_);
  }

  folly::Optional<int64_t>& umember1() {
    if (_which_ == 0) {
      return emplace<1>();
    }
    if (_which_ != 1) {
      throw std::runtime_error(
          "umember1 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<int64_t>>();
  }
  const folly::Optional<int64_t>& umember1() const {
    if (_which_ != 1) {
      throw std::runtime_error(
          "umember1 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<int64_t>>();
  }

  folly::Optional<bool>& umember2() {
    if (_which_ == 0) {
      return emplace<2>();
    }
    if (_which_ != 2) {
      throw std::runtime_error(
          "umember2 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<bool>>();
  }
  const folly::Optional<bool>& umember2() const {
    if (_which_ != 2) {
      throw std::runtime_error(
          "umember2 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<bool>>();
  }

  folly::Optional<std::string>& umember3() {
    if (_which_ == 0) {
      return emplace<3>();
    }
    if (_which_ != 3) {
      throw std::runtime_error(
          "umember3 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<std::string>>();
  }
  const folly::Optional<std::string>& umember3() const {
    if (_which_ != 3) {
      throw std::runtime_error(
          "umember3 is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<folly::Optional<std::string>>();
  }

  template <
      uint32_t id,
      class C = typename carbon::FindByKey<id, _IdTypeMap>::type>
  C& get() {
    if (id != _which_) {
      throw std::runtime_error(
          "Type id is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<C>();
  }

  template <
      uint32_t id,
      class C = typename carbon::FindByKey<id, _IdTypeMap>::type>
  const C& get() const {
    if (id != _which_) {
      throw std::runtime_error(
          "Type id is not set in union TestOptionalUnion.");
    }
    return _carbon_variant.get<C>();
  }

  /* Note: Emplace invalidates all previous accessor references.
   * Please exercise caution.
   */
  template <
      uint32_t id,
      class... Args,
      class C = typename carbon::FindByKey<id, _IdTypeMap>::type>
  C& emplace(Args&&... args) {
    _which_ = id;
    return _carbon_variant.emplace<C>(std::forward<Args>(args)...);
  }

  template <
      ValueType id,
      class... Args,
      class C = typename carbon::
          FindByKey<static_cast<uint32_t>(id), _IdTypeMap>::type>
  C& emplace(Args&&... args) {
    _which_ = static_cast<uint32_t>(id);
    return _carbon_variant.emplace<C>(std::forward<Args>(args)...);
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;
  template <class V>
  void foreachMember(V&& v);
  template <class V>
  void foreachMember(V&& v) const;

 private:
  carbon::Variant<
      folly::Optional<int64_t>,
      folly::Optional<bool>,
      folly::Optional<std::string>>
      _carbon_variant;

  uint32_t _which_{0};
};

class TestF14Containers {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  TestF14Containers() = default;
  TestF14Containers(const TestF14Containers&) = default;
  TestF14Containers& operator=(const TestF14Containers&) = default;
  TestF14Containers(TestF14Containers&&) = default;
  TestF14Containers& operator=(TestF14Containers&&) = default;

  const folly::F14FastMap<std::string, int64_t>& fastMap() const {
    return fastMap_;
  }
  folly::F14FastMap<std::string, int64_t>& fastMap() {
    return fastMap_;
  }
  const folly::F14NodeMap<std::string, int64_t>& nodeMap() const {
    return nodeMap_;
  }
  folly::F14NodeMap<std::string, int64_t>& nodeMap() {
    return nodeMap_;
  }
  const folly::F14ValueMap<std::string, int64_t>& valueMap() const {
    return valueMap_;
  }
  folly::F14ValueMap<std::string, int64_t>& valueMap() {
    return valueMap_;
  }
  const folly::F14VectorMap<std::string, int64_t>& vectorMap() const {
    return vectorMap_;
  }
  folly::F14VectorMap<std::string, int64_t>& vectorMap() {
    return vectorMap_;
  }
  const folly::F14FastSet<int64_t>& fastSet() const {
    return fastSet_;
  }
  folly::F14FastSet<int64_t>& fastSet() {
    return fastSet_;
  }
  const folly::F14FastSet<int64_t>& nodeSet() const {
    return nodeSet_;
  }
  folly::F14FastSet<int64_t>& nodeSet() {
    return nodeSet_;
  }
  const folly::F14FastSet<int64_t>& valueSet() const {
    return valueSet_;
  }
  folly::F14FastSet<int64_t>& valueSet() {
    return valueSet_;
  }
  const folly::F14FastSet<int64_t>& vectorSet() const {
    return vectorSet_;
  }
  folly::F14FastSet<int64_t>& vectorSet() {
    return vectorSet_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  folly::F14FastMap<std::string, int64_t> fastMap_;
  folly::F14NodeMap<std::string, int64_t> nodeMap_;
  folly::F14ValueMap<std::string, int64_t> valueMap_;
  folly::F14VectorMap<std::string, int64_t> vectorMap_;
  folly::F14FastSet<int64_t> fastSet_;
  folly::F14FastSet<int64_t> nodeSet_;
  folly::F14FastSet<int64_t> valueSet_;
  folly::F14FastSet<int64_t> vectorSet_;
};

class TestStdContainers {
 public:
  static constexpr bool hasExptime = false;
  static constexpr bool hasFlags = false;
  static constexpr bool hasKey = false;
  static constexpr bool hasValue = false;

  TestStdContainers() = default;
  TestStdContainers(const TestStdContainers&) = default;
  TestStdContainers& operator=(const TestStdContainers&) = default;
  TestStdContainers(TestStdContainers&&) = default;
  TestStdContainers& operator=(TestStdContainers&&) = default;

  const std::unordered_map<std::string, int64_t>& fastMap() const {
    return fastMap_;
  }
  std::unordered_map<std::string, int64_t>& fastMap() {
    return fastMap_;
  }
  const std::unordered_map<std::string, int64_t>& nodeMap() const {
    return nodeMap_;
  }
  std::unordered_map<std::string, int64_t>& nodeMap() {
    return nodeMap_;
  }
  const std::unordered_map<std::string, int64_t>& valueMap() const {
    return valueMap_;
  }
  std::unordered_map<std::string, int64_t>& valueMap() {
    return valueMap_;
  }
  const std::unordered_map<std::string, int64_t>& vectorMap() const {
    return vectorMap_;
  }
  std::unordered_map<std::string, int64_t>& vectorMap() {
    return vectorMap_;
  }
  const std::unordered_set<int64_t>& fastSet() const {
    return fastSet_;
  }
  std::unordered_set<int64_t>& fastSet() {
    return fastSet_;
  }
  const std::unordered_set<int64_t>& nodeSet() const {
    return nodeSet_;
  }
  std::unordered_set<int64_t>& nodeSet() {
    return nodeSet_;
  }
  const std::unordered_set<int64_t>& valueSet() const {
    return valueSet_;
  }
  std::unordered_set<int64_t>& valueSet() {
    return valueSet_;
  }
  const std::unordered_set<int64_t>& vectorSet() const {
    return vectorSet_;
  }
  std::unordered_set<int64_t>& vectorSet() {
    return vectorSet_;
  }
  uint64_t flags() const {
    return 0;
  }
  int32_t exptime() const {
    return 0;
  }

  void serialize(carbon::CarbonProtocolWriter& writer) const;

  void deserialize(carbon::CarbonProtocolReader& reader);

  template <class V>
  void visitFields(V&& v);
  template <class V>
  void visitFields(V&& v) const;

 private:
  std::unordered_map<std::string, int64_t> fastMap_;
  std::unordered_map<std::string, int64_t> nodeMap_;
  std::unordered_map<std::string, int64_t> valueMap_;
  std::unordered_map<std::string, int64_t> vectorMap_;
  std::unordered_set<int64_t> fastSet_;
  std::unordered_set<int64_t> nodeSet_;
  std::unordered_set<int64_t> valueSet_;
  std::unordered_set<int64_t> vectorSet_;
};
} // namespace test
} // namespace carbon

#include "CarbonTestMessages-inl.h"
