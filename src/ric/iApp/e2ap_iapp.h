/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this file
 * except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */



#ifndef E2AP_IAPP_H
#define E2AP_IAPP_H

#include "lib/e2ap/e2ap_ap_wrapper.h"                                      // for e2ap...
#include "lib/e2ap/e2_setup_request_wrapper.h"                  // for e2_s...
#include "lib/e2ap/ric_control_ack_wrapper.h"                   // for ric_...
#include "lib/e2ap/ric_control_failure_wrapper.h"               // for ric_...
#include "lib/e2ap/ric_indication_wrapper.h"                    // for ric_...
#include "lib/e2ap/ric_subscription_delete_failure_wrapper.h"   // for ric_...
#include "lib/e2ap/ric_subscription_delete_response_wrapper.h"  // for ric_...
#include "lib/e2ap/ric_subscription_failure_wrapper.h"          // for ric_...
#include "lib/e2ap/ric_subscription_response_wrapper.h"         // for ric_...
#include "lib/e2ap/type_defs_wrapper.h"                                    // for e2ap...
                                                                 //
#include "util/byte_array.h"                                     // for byte...

typedef struct e2ap_iapp_s 
{
  e2ap_ap_t base;

} e2ap_iapp_t;

void e2ap_msg_free_iapp(e2ap_iapp_t* ag, e2ap_msg_t* msg);

/////////////
// Encoding
//////////////

byte_array_t e2ap_enc_setup_response_iapp(e2ap_iapp_t* ap, e2_setup_response_t* sr);


byte_array_t e2ap_msg_enc_iapp(e2ap_iapp_t* ap, const e2ap_msg_t* msg); 

byte_array_t e2ap_enc_subscription_response_iapp(e2ap_iapp_t* ap, const ric_subscription_response_t* sr);

byte_array_t e2ap_enc_subscription_failure_iapp(e2ap_iapp_t* ap,const ric_subscription_failure_t* sf);

byte_array_t e2ap_enc_indication_iapp(e2ap_iapp_t* ap, const ric_indication_t* ind);

byte_array_t e2ap_enc_subscription_delete_response_iapp(e2ap_iapp_t* ap, const ric_subscription_delete_response_t*  sdr);

byte_array_t e2ap_enc_subscription_delete_failure_iapp(e2ap_iapp_t* ap, const ric_subscription_delete_failure_t*  sdf);

byte_array_t e2ap_enc_control_acknowledge_iapp(e2ap_iapp_t* ap, const ric_control_acknowledge_t* ca);

byte_array_t e2ap_enc_control_failure_iapp(e2ap_iapp_t* ap, const ric_control_failure_t* cf);


//
// Decoding
//

e2ap_msg_t e2ap_msg_dec_iapp(e2ap_iapp_t* ap, byte_array_t ba); 

#endif

