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

#include "../../src/agent/e2_agent_api.h"
#include "../../src/ric/near_ric_api.h"
#include "../common/fill_ind_data.h"
#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static
void sig_handler(int sig_num)
{
  printf("\nEnding the near-RIC with signal number = %d\n", sig_num);

  // Stop the E2-Agent
  stop_agent_api();
  printf("Agent stopped\n");

 // Stop the RIC
  stop_near_ric_api();
  printf("Near RIC stopped\n");

  exit(0);
}

static
void read_RAN(sm_ag_if_rd_t* data)
{
  assert(data->type == MAC_STATS_V0 || data->type == RLC_STATS_V0 ||  data->type == PDCP_STATS_V0 || data->type == SLICE_STATS_V0);


  if(data->type == MAC_STATS_V0 ){
      fill_mac_ind_data(&data->mac_stats);
  } else if(data->type == RLC_STATS_V0) {
      fill_rlc_ind_data(&data->rlc_stats);
  } else if (data->type == PDCP_STATS_V0 ){
      fill_pdcp_ind_data(&data->pdcp_stats);
  } else if(data->type == SLICE_STATS_V0 ){
    fill_slice_ind_data(&data->slice_stats);
  } else {
    assert("Invalid data type");
  }
}

static
sm_ag_if_ans_t write_RAN(sm_ag_if_wr_t const* data)
{
  assert(data != NULL);
  if(data->type == MAC_CTRL_REQ_V0){
    //printf("Control message called in the RAN \n");
    sm_ag_if_ans_t ans = {.type = MAC_AGENT_IF_CTRL_ANS_V0};
    ans.mac.ans = MAC_CTRL_OUT_OK;
    return ans;
  } else if(data->type == SLICE_CTRL_REQ_V0 ){

    slice_ctrl_req_data_t const* slice_req_ctrl = &data->slice_req_ctrl;
    slice_ctrl_msg_t const* msg = &slice_req_ctrl->msg;

    if(msg->type == SLICE_CTRL_SM_V0_ADD){
        printf("[E2 Agent]: SLICE CONTROL ADD rx\n");
    } else if (msg->type == SLICE_CTRL_SM_V0_DEL){
        printf("[E2 Agent]: SLICE CONTROL DEL rx\n");
    } else if (msg->type == SLICE_CTRL_SM_V0_UE_SLICE_ASSOC){
        printf("[E2 Agent]: SLICE CONTROL ASSOC rx\n");
    } else {
      assert(0!=0 && "Unknown msg_type!");
    }

    sm_ag_if_ans_t ans = {.type =  SLICE_AGENT_IF_CTRL_ANS_V0};
    return ans;
  } else {
    assert(0 != 0 && "Not supported function ");
  }
  sm_ag_if_ans_t ans = {0};
  return ans;
}

int main(int argc, char *argv[])
{
  // Signal handler
  signal(SIGINT, sig_handler);

  // Init the E2-Agent
  const int mcc = 208; 
  const int mnc = 92; 
  const int mnc_digit_len = 2;
  const int nb_id = 42;
  sm_io_ag_t io = {.read = read_RAN, .write = write_RAN};
  args_t args;
  // Parse arguments
  if(parse_args(argc, argv, &args) > 0) {
    print_usage(argv[0]);
    exit(1);
  }

  init_agent_api( mcc, mnc, mnc_digit_len, nb_id, io,args );
  usleep(1000);

  // Init the RIC
  init_near_ric_api(args);

  while(1){
    sleep(5);
  }

  return EXIT_SUCCESS;
}