/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file ../../../DCPS/Compiler/idl_test3_lib/FooDef3.idl */
#ifndef OPENDDS_IDL_GENERATED_FOODEF3_TS_HPP_GIEDVF
#define OPENDDS_IDL_GENERATED_FOODEF3_TS_HPP_GIEDVF
#include "FooDef3C.h"
#include "FACE/TS.hpp"
namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfBoolean_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfBoolean& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfBoolean& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfBoolean& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfBoolean_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfString_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfString& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfString& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfString& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfString_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfChar_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfChar& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfChar& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfChar& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfChar_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfOctet_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfOctet& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfOctet& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfOctet& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfOctet_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfLong_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfLong& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfLong& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfLong& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfLong_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

namespace FACE
{
  namespace Read_Callback
  {
    typedef void (*send_event_Xyz_StructOfArrayOfSeqOfAnEnum_Ptr) (
      /* in */ TRANSACTION_ID_TYPE transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfAnEnum& message,
      /* in */ MESSAGE_TYPE_GUID message_type_id,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* in */ const WAITSET_TYPE waitset,
      /* out */ RETURN_CODE_TYPE& return_code);
  }

  namespace TS
  {
    FooLib_Export
    void Receive_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* out */ Xyz::StructOfArrayOfSeqOfAnEnum& message,
      /* in */ MESSAGE_SIZE_TYPE message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Send_Message(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ TIMEOUT_TYPE timeout,
      /* inout */ TRANSACTION_ID_TYPE& transaction_id,
      /* inout */ Xyz::StructOfArrayOfSeqOfAnEnum& message,
      /* inout */ MESSAGE_SIZE_TYPE& message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

    FooLib_Export
    void Register_Callback(
      /* in */ CONNECTION_ID_TYPE connection_id,
      /* in */ const WAITSET_TYPE waitset,
      /* in */ Read_Callback::send_event_Xyz_StructOfArrayOfSeqOfAnEnum_Ptr data_callback,
      /* in */ MESSAGE_SIZE_TYPE max_message_size,
      /* out */ RETURN_CODE_TYPE& return_code);

  }
}

#endif /* OPENDDS_IDL_GENERATED_FOODEF3_TS_HPP_GIEDVF */
