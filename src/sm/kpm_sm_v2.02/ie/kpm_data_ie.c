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

/* 
 * This file contains free/copy/equals methods implementation for the data structures defined in the associated header file 
 */

#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "../../../util/alg_ds/alg/eq_float.h"
#include "../../../util/byte_array.h"
#include "kpm_data_ie.h"

/* ACTION DEFINITION*/
void free_kpm_action_def(kpm_action_def_t* src) 
{
  assert(src != NULL);
  assert(0!=0 && "Not implemented");
}

/* INDICATION*/
void free_kpm_ind_hdr(kpm_ind_hdr_t* src)
{
  assert(src != NULL);
  free_byte_array(src->collectStartTime);
  if (src->fileFormatversion != NULL)
    free_byte_array(*(src->fileFormatversion));
  if (src->senderName != NULL)
    free_byte_array(*(src->senderName));
  if (src->senderType != NULL)
    free_byte_array(*(src->senderType));
  if (src->vendorName != NULL)
    free_byte_array(*(src->vendorName));
}

void free_kpm_ind_msg(kpm_ind_msg_t* src) 
{
  assert(src != NULL);
  
  size_t i;

  for (i=0; i<src->MeasData_len; i++)
    free(src->MeasData[i].measRecord);
  free(src->MeasData);
  
  /*OPTIONAL fields below*/
  if (src->MeasInfo != NULL){
    for (i=0; i<src->MeasData_len; i++)
      for (size_t j=0; i<src->MeasInfo_len; j++)
        free_kpm_label_info(&(src->MeasInfo[i].labelInfo[j]));
  }

  if (src->granulPeriod != NULL)
    free(src->granulPeriod);
}

kpm_ind_hdr_t cp_kpm_ind_hdr(kpm_ind_hdr_t const* src)
{
  assert(src != NULL);
  kpm_ind_hdr_t ret = {0};

  ret.collectStartTime = copy_byte_array(src->collectStartTime);
  
  if (src->fileFormatversion){
    ret.fileFormatversion = calloc (1, sizeof(adapter_PrintableString_t));
    *(ret.fileFormatversion) = copy_byte_array(*(src->fileFormatversion));
  }
  if (src->senderName){
    ret.senderName = calloc (1, sizeof(adapter_PrintableString_t));
    *(ret.senderName) = copy_byte_array(*(src->senderName));
  }
  if (src->senderType){
    ret.senderType = calloc (1, sizeof(adapter_PrintableString_t));
    *(ret.senderType) = copy_byte_array(*(src->senderType));
  }
  if (src->vendorName){
    ret.vendorName = calloc (1, sizeof(adapter_PrintableString_t));
    *(ret.vendorName) = copy_byte_array(*(src->vendorName));
  }
  return ret;
}

kpm_ind_msg_t cp_kpm_ind_msg(kpm_ind_msg_t const* src) {

  assert(src != NULL);
  kpm_ind_msg_t ret = {0};

  if (src->granulPeriod) {
    ret.granulPeriod = malloc (sizeof(ret.granulPeriod));
    *(ret.granulPeriod) = *(src->granulPeriod); 
  }

  if (src->MeasData_len) {
    ret.MeasData_len = src->MeasData_len;
    ret.MeasData = calloc(src->MeasData_len, sizeof(adapter_MeasDataItem_t));
    memcpy (ret.MeasData, src->MeasData, src->MeasData_len * sizeof(adapter_MeasDataItem_t));
    for (size_t i = 0; i<ret.MeasData_len; i++){
      ret.MeasData[i].measRecord = calloc(src->MeasData[i].measRecord_len, sizeof(adapter_MeasRecord_t));
      memcpy (ret.MeasData[i].measRecord, src->MeasData[i].measRecord, src->MeasData[i].measRecord_len * sizeof(adapter_MeasDataItem_t));
    }
  }

  if (src->MeasInfo_len){
    ret.MeasInfo_len = src->MeasInfo_len;
    ret.MeasInfo = calloc(src->MeasInfo_len, sizeof(MeasInfo_t));
    memcpy (ret.MeasInfo, src->MeasInfo, src->MeasInfo_len * sizeof(MeasInfo_t));
    for (size_t i = 0; i<ret.MeasInfo_len; i++){
      ret.MeasInfo[i].labelInfo = calloc(src->MeasInfo[i].labelInfo_len, sizeof(adapter_LabelInfoList_t));
      memcpy (ret.MeasInfo[i].labelInfo, src->MeasInfo[i].labelInfo, src->MeasInfo[i].labelInfo_len * sizeof(adapter_LabelInfoList_t));
      // XXX: deep copy of adapter_MeasurementTypeName_t structure (byte_array)
      // XXX: deep copy of LabelInfo items.
    }
  }
  
  return ret;
}

// Equality implemented as euristics for the moment. This function is used in test framework.
// XXX: to be extended 
bool eq_kpm_ind_msg(kpm_ind_msg_t const* m0, kpm_ind_msg_t const* m1)
{
  assert(m0 != NULL);
  assert(m1 != NULL);

  bool ret = true;
  if (m0->granulPeriod != NULL)
    ret &= (m0->granulPeriod ==  m1->granulPeriod);
  ret &= (m0->MeasData_len == m1->MeasData_len);
  ret &= (m0->MeasInfo_len == m1->MeasInfo_len);
  return ret;
}


void free_kpm_ind_data(kpm_ind_data_t* ind) 
{
  assert(ind != NULL);
  free_kpm_ind_hdr(&ind->hdr);
  free_kpm_ind_msg(&ind->msg);
}

kpm_ind_data_t cp_kpm_ind_data(kpm_ind_data_t const* src) 
{

  assert(src != NULL);
  kpm_ind_data_t ret = {.hdr = cp_kpm_ind_hdr(&src->hdr), .msg = cp_kpm_ind_msg(&src->msg)};
  return ret;
}

/* GENERIC */
void free_kpm_label_info(adapter_LabelInfoList_t *l) 
{
  if (l->aRPmax)
    free (l->aRPmax);
  if (l->plmnID)
    free_byte_array(*(l->plmnID));
 
  #warning "free_kpm_label_info(): to complete the implementation"
	// TO BE COMPLETED
  // adapter_S_NSSAI_t	            *sliceID;	/* OPTIONAL */
	// adapter_FiveQI_t	            *fiveQI;	/* OPTIONAL */
	// adapter_QosFlowIdentifier_t	  *qFI;	    /* OPTIONAL */
	// adapter_QCI_t	                *qCI;	    /* OPTIONAL */
	// adapter_QCI_t	                *qCImax;	/* OPTIONAL */
	// adapter_QCI_t	                *qCImin;	/* OPTIONAL */
	// long	                        *aRPmax;	/* OPTIONAL */
	// long	                        *aRPmin;	/* OPTIONAL */
	// long	                        *bitrateRange;/* OPTIONAL */
	// long	                        *layerMU_MIMO;/* OPTIONAL */
	// long	                        *sUM;	    /* OPTIONAL */
	// long	                        *distBinX;/* OPTIONAL */
	// long	                        *distBinY;/* OPTIONAL */
	// long	                        *distBinZ;/* OPTIONAL */
	// long	                        *preLabelOverride;/* OPTIONAL */
	// long	                        *startEndInd;	/* OPTIONAL */
	// long	                        *min;	    /* OPTIONAL */
	// long	                        *max;	    /* OPTIONAL */
	// long	                        *avg;	    /* OPTIONAL */
}
/* FUNCTION DEFINITION*/
void free_kpm_func_def(kpm_func_def_t* src)
{
  assert(src != NULL);
  assert(0!=0 && "Not implemented");
}