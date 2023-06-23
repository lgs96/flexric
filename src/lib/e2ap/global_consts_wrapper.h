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

#ifndef GLOBAL_CONST_WRAPPER_MIR_H
#define GLOBAL_CONST_WRAPPER_MIR_H 

#ifdef E2AP_V1
#include "v1_01/global_consts.h"
#elif E2AP_V2 
static_assert(0!=0, "Not implemented E2AP version");
#elif E2AP_V3 
static_assert(0!=0, "Not implemented E2AP version");
#else
static_assert(0!=0, "Unknown E2AP version");
#endif

#endif

