#ifndef GNB_h
#define GNB_h

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>
#include <stdlib.h>


#include "guami.h"
#include "global_gnb_id.h"
#include "global_ng_ran_node_id.h"


typedef struct{

  // 6.2.3.16
  // Mandatory
  // AMF UE NGAP ID
  uint64_t amf_ue_ngap_id; // [0, 2^40 ]

  // Mandatory
  //GUAMI 6.2.3.17 
  guami_t guami;

  // gNB-CU UE F1AP ID List
  // C-ifCUDUseparated 
  size_t gnb_cu_ue_f1ap_lst_len;  // [1,4]
  uint32_t *gnb_cu_ue_f1ap_lst;

  //gNB-CU-CP UE E1AP ID List
  //C-ifCPUPseparated 
  size_t gnb_cu_cp_ue_e1ap_lst_len;  // [1, 65535]
  uint32_t *gnb_cu_cp_ue_e1ap_lst;


  // RAN UE ID
  // Optional
  // 6.2.3.25
  uint64_t *ran_ue_id;

  //  M-NG-RAN node UE XnAP ID
  // C- ifDCSetup
  // 6.2.3.19
  uint32_t *ng_ran_node_ue_xnap_id;


  // Global gNB ID
  // 6.2.3.3
  // Optional
  // This IE shall not be used. Global NG-RAN Node ID IE shall replace this IE 
  global_gnb_id_t *global_gnb_id;


  // Global NG-RAN Node ID
  // C-ifDCSetup
  // 6.2.3.2
  global_ng_ran_node_id_t *global_ng_ran_node_id;



} gnb_t ;

#ifdef __cplusplus
}
#endif

#endif

// done
