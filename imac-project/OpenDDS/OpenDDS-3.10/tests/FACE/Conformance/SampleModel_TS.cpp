/* Generated by /Users/yc/MyGithub/imac-project/OpenDDS/OpenDDS-3.10/bin/opendds_idl version 3.10 (ACE version 6.2a_p11) running on input file SampleModel.idl */
#include "SampleModel_TS.hpp"
#include "SampleModelTypeSupportImpl.h"
#include "dds/FACE/FaceTSS.h"

namespace FACE { namespace TS {

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     FACE::DM::EGI_Data& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  FACE::DM::EGI_Data& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_FACE_DM_EGI_Data_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct FACE_DM_EGI_Data_Initializer {
  FACE_DM_EGI_Data_Initializer()
  {
    FACE::DM::EGI_DataTypeSupport_var ts = new FACE::DM::EGI_DataTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_FACE_DM_EGI_Data;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     FACE::DM::IMU_Data& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  FACE::DM::IMU_Data& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_FACE_DM_IMU_Data_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct FACE_DM_IMU_Data_Initializer {
  FACE_DM_IMU_Data_Initializer()
  {
    FACE::DM::IMU_DataTypeSupport_var ts = new FACE::DM::IMU_DataTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_FACE_DM_IMU_Data;

void Receive_Message(CONNECTION_ID_TYPE connection_id,
                     TIMEOUT_TYPE timeout,
                     TRANSACTION_ID_TYPE& transaction_id,
                     FACE::DM::Nav_Data& message,
                     MESSAGE_SIZE_TYPE message_size,
                     RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::receive_message(connection_id, timeout,
                                    transaction_id, message,
                                    message_size, return_code);
}

void Send_Message(CONNECTION_ID_TYPE connection_id,
                  TIMEOUT_TYPE timeout,
                  TRANSACTION_ID_TYPE& transaction_id,
                  FACE::DM::Nav_Data& message,
                  MESSAGE_SIZE_TYPE& message_size,
                  RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::send_message(connection_id, timeout,
                                 transaction_id, message,
                                 message_size, return_code);
}

void Register_Callback(CONNECTION_ID_TYPE connection_id,
                       const WAITSET_TYPE waitset,
                       Read_Callback::send_event_FACE_DM_Nav_Data_Ptr data_callback,
                       MESSAGE_SIZE_TYPE max_message_size,
                       RETURN_CODE_TYPE& return_code) {
  OpenDDS::FaceTSS::register_callback(connection_id, waitset,
                                      data_callback,
                                      max_message_size, return_code);
}

struct FACE_DM_Nav_Data_Initializer {
  FACE_DM_Nav_Data_Initializer()
  {
    FACE::DM::Nav_DataTypeSupport_var ts = new FACE::DM::Nav_DataTypeSupportImpl;
    ts->register_type(0, "");
  }
} init_FACE_DM_Nav_Data;

}}