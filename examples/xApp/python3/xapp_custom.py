import xapp_sdk as ric
import time
import os
import pdb

####################
#### MAC INDICATION CALLBACK
####################

attributes_to_print = ["bsr", "frame", "slot", "ul_aggr_tbs", "ul_aggr_prb", "ul_curr_tbs", "ul_mcs1", "ul_sched_rb"]

#  MACCallback class is defined and derived from C++ class mac_cb
class MACCallback(ric.mac_cb):
    # Define Python class 'constructor'
    def __init__(self):
        # Call C++ base class constructor
        ric.mac_cb.__init__(self)
    # Override C++ method: virtual void handle(swig_mac_ind_msg_t a) = 0;
    def handle(self, ind):
        # Print swig_mac_ind_msg_t
        if len(ind.ue_stats) > 0:
            t_now = time.time_ns() / 1000.0
            t_mac = ind.tstamp / 1.0
            t_diff = t_now - t_mac
            #print('MAC Indication tstamp = ' + str(t_mac) + ' diff = ' + str(t_diff))
            for i in range(len(ind.ue_stats)):
                #print('=====================')
                #print('UE ', i)
                for attr in attributes_to_print:
                    value = getattr(ind.ue_stats[i], attr)
                    #print(f"{attr}: {value}")
            #print('=====================')


####################
#### RLC INDICATION CALLBACK
####################

class RLCCallback(ric.rlc_cb):
    # Define Python class 'constructor'
    def __init__(self):
        # Call C++ base class constructor
        ric.rlc_cb.__init__(self)
    # Override C++ method: virtual void handle(swig_rlc_ind_msg_t a) = 0;
    def handle(self, ind):
        # Print swig_rlc_ind_msg_t
        if len(ind.rb_stats) > 0:
            t_now = time.time_ns() / 1000.0
            t_rlc = ind.tstamp / 1.0
            t_diff = t_now - t_rlc
            #print('RLC Indication tstamp = ' + str(ind.tstamp) + ' diff = ' + str(t_diff))
            # print('RLC rnti = '+ str(ind.rb_stats[0].rnti))

####################
#### PDCP INDICATION CALLBACK
####################

class PDCPCallback(ric.pdcp_cb):
    # Define Python class 'constructor'
    def __init__(self):
        # Call C++ base class constructor
        ric.pdcp_cb.__init__(self)
   # Override C++ method: virtual void handle(swig_pdcp_ind_msg_t a) = 0;
    def handle(self, ind):
        # Print swig_pdcp_ind_msg_t
        if len(ind.rb_stats) > 0:
            t_now = time.time_ns() / 1000.0
            t_pdcp = ind.tstamp / 1.0
            t_diff = t_now - t_pdcp
            #print('PDCP Indication tstamp = ' + str(ind.tstamp) + ' diff = ' + str(t_diff))
            # print('PDCP rnti = '+ str(ind.rb_stats[0].rnti))


####################
####  MAC RESOURCE ALLOCATION CONTROL 
####################

dummy_scheduling_info = [
    {
        "rnti": 1001,
        "mcs": 5,
        "num_rb": 10
    },
    {
        "rnti": 1002,
        "mcs": 6,
        "num_rb": 8
    },
    {
        "rnti": 1003,
        "mcs": 4,
        "num_rb": 12
    },
    {
        "rnti": 1004,
        "mcs": 7,
        "num_rb": 6
    }
]

def fill_mac_ctrl_msg(scheduling_info):
    # Create a new mac_ctrl_msg_t instance
    msg = ric.mac_ctrl_msg_t()

    # Set the action (assuming you have a predefined action for resource allocation)
    msg.action = 42  # Replace with the appropriate action value

    # Set the number of users based on the length of scheduling_info
    msg.num_users = len(scheduling_info)

    # Create a list to hold user_resource_t objects
    user_resources = []

    # Allocate memory for user resources on the C side
    resource_alloc = ric.allocate_user_resources(msg.num_users)

    # Fill in the user resource details for each user
    for i, user_info in enumerate(scheduling_info):
        ric.set_user_resource(resource_alloc, i, user_info['rnti'], user_info['mcs'], user_info['num_rb'])

    # Assign the allocated and filled resource_alloc to the msg
    msg.resource_alloc = resource_alloc

    return msg

####################
####  GENERAL 
####################

ric.init()

conn = ric.conn_e2_nodes()
assert(len(conn) > 0)
for i in range(0, len(conn)):
    print("Global E2 Node [" + str(i) + "]: PLMN MCC = " + str(conn[i].id.plmn.mcc))
    print("Global E2 Node [" + str(i) + "]: PLMN MNC = " + str(conn[i].id.plmn.mnc))

####################
#### MAC INDICATION
####################
'''
mac_hndlr = []
for i in range(0, len(conn)):
    mac_cb = MACCallback()
    hndlr = ric.report_mac_sm(conn[i].id, ric.Interval_ms_1, mac_cb)
    mac_hndlr.append(hndlr)     
    time.sleep(1)

####################
#### RLC INDICATION
####################

rlc_hndlr = []
for i in range(0, len(conn)):
    rlc_cb = RLCCallback()
    hndlr = ric.report_rlc_sm(conn[i].id, ric.Interval_ms_1, rlc_cb)
    rlc_hndlr.append(hndlr) 
    time.sleep(1)

####################
#### PDCP INDICATION
####################

pdcp_hndlr = []
for i in range(0, len(conn)):
    pdcp_cb = PDCPCallback()
    hndlr = ric.report_pdcp_sm(conn[i].id, ric.Interval_ms_1, pdcp_cb)
    pdcp_hndlr.append(hndlr) 
    time.sleep(1)

time.sleep(10)
'''
# 231009 Goodsol
####################
#### MAC CONTROL
####################
node_idx = 0

msg = fill_mac_ctrl_msg(dummy_scheduling_info)
ric.control_mac_sm(conn[node_idx].id, msg)
time.sleep(20)

print('=======================================================================Control msg sent')

### End
'''

for i in range(0, len(mac_hndlr)):
    ric.rm_report_mac_sm(mac_hndlr[i])

for i in range(0, len(rlc_hndlr)):
    ric.rm_report_rlc_sm(rlc_hndlr[i])

for i in range(0, len(pdcp_hndlr)):
    ric.rm_report_pdcp_sm(pdcp_hndlr[i])
'''
# Avoid deadlock. ToDo revise architecture 
while ric.try_stop == 0:
    time.sleep(1)

print("Test finished")
