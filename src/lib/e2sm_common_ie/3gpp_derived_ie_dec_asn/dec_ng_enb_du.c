#include <assert.h>

#include "dec_ng_enb_du.h"

ng_enb_du_t dec_ng_eNB_DU_UE_asn(const UEID_NG_ENB_DU_t * ng_enb_du_asn)
{
    ng_enb_du_t ng_enb_du = {0};

    // C-if CU DU separated
    // ng-eNB-CU UE W1AP ID

    memcpy(&ng_enb_du.ng_enb_cu_ue_w1ap_id, &ng_enb_du_asn->ng_eNB_CU_UE_W1AP_ID, 1);


    return ng_enb_du;
}
