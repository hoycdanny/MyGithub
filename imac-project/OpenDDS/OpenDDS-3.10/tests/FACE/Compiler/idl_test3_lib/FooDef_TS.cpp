/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file ../../../DCPS/Compiler/idl_test3_lib/FooDef.idl */
#include "FooDef_TS.hpp"
#include "FooDefTypeSupportImpl.h"
#include "dds/FACE/FaceTSS.h"

namespace FACE { namespace TS {

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfArrayOfArrayOfString& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfArrayOfArrayOfString& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfArrayOfArrayOfString_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfArrayOfArrayOfString_Initializer {
  Xyz_StructOfArrayOfArrayOfString_Initializer()
  {
    Xyz::StructOfArrayOfArrayOfStringTypeSupport_var ts = new Xyz::StructOfArrayOfArrayOfStringTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfArrayOfArrayOfString;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfArrayOfArrayOfChar& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfArrayOfArrayOfChar& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfArrayOfArrayOfChar_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfArrayOfArrayOfChar_Initializer {
  Xyz_StructOfArrayOfArrayOfChar_Initializer()
  {
    Xyz::StructOfArrayOfArrayOfCharTypeSupport_var ts = new Xyz::StructOfArrayOfArrayOfCharTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfArrayOfArrayOfChar;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfArrayOfArrayOfOctet& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfArrayOfArrayOfOctet& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfArrayOfArrayOfOctet_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfArrayOfArrayOfOctet_Initializer {
  Xyz_StructOfArrayOfArrayOfOctet_Initializer()
  {
    Xyz::StructOfArrayOfArrayOfOctetTypeSupport_var ts = new Xyz::StructOfArrayOfArrayOfOctetTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfArrayOfArrayOfOctet;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfArrayOfArrayOfLong& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfArrayOfArrayOfLong& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfArrayOfArrayOfLong_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfArrayOfArrayOfLong_Initializer {
  Xyz_StructOfArrayOfArrayOfLong_Initializer()
  {
    Xyz::StructOfArrayOfArrayOfLongTypeSupport_var ts = new Xyz::StructOfArrayOfArrayOfLongTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfArrayOfArrayOfLong;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfArrayOfArrayOfAnEnum& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfArrayOfArrayOfAnEnum& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfArrayOfArrayOfAnEnum_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfArrayOfArrayOfAnEnum_Initializer {
  Xyz_StructOfArrayOfArrayOfAnEnum_Initializer()
  {
    Xyz::StructOfArrayOfArrayOfAnEnumTypeSupport_var ts = new Xyz::StructOfArrayOfArrayOfAnEnumTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfArrayOfArrayOfAnEnum;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructOfSeqOfSeqOfLong& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructOfSeqOfSeqOfLong& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructOfSeqOfSeqOfLong_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructOfSeqOfSeqOfLong_Initializer {
  Xyz_StructOfSeqOfSeqOfLong_Initializer()
  {
    Xyz::StructOfSeqOfSeqOfLongTypeSupport_var ts = new Xyz::StructOfSeqOfSeqOfLongTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructOfSeqOfSeqOfLong;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::StructAUnion& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::StructAUnion& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_StructAUnion_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_StructAUnion_Initializer {
  Xyz_StructAUnion_Initializer()
  {
    Xyz::StructAUnionTypeSupport_var ts = new Xyz::StructAUnionTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_StructAUnion;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     Xyz::Foo& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  Xyz::Foo& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_Xyz_Foo_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct Xyz_Foo_Initializer {
  Xyz_Foo_Initializer()
  {
    Xyz::FooTypeSupport_var ts = new Xyz::FooTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_Xyz_Foo;

}}