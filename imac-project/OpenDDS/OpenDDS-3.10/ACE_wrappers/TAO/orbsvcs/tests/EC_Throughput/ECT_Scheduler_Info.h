// This file was automatically generated by Scheduler_Factory
// before editing the file please consider generating it again
// $Id: ECT_Scheduler_Info.h 14 2007-02-01 15:49:12Z mitza $

#include "orbsvcs/Scheduler_Factory.h"

static ACE_Scheduler_Factory::POD_RT_Info runtime_infos[] = {
{ "Reactor_Task-25000.us", 1, 0, 0, 0, 250000,
   4, 0, 0, 1, 127, 0, 0, 0 },
{ "Reactor_Task-50000.us", 2, 0, 0, 0, 500000,
   4, 0, 0, 1, 125, 0, 0, 0 },
{ "Reactor_Task-100000.us", 3, 0, 0, 0, 1000000,
   4, 0, 0, 1, 123, 0, 0, 0 },
{ "Reactor_Task-200000.us", 4, 0, 0, 0, 2000000,
   4, 0, 0, 1, 121, 0, 0, 0 },
{ "Reactor_Task-1000000.us", 5, 0, 0, 0, 10000000,
   4, 0, 0, 1, 119, 0, 0, 0 },

{ "ACE_ES_Dispatch_Queue-25000.us", 6, 0, 0, 0, 0,
   4, 0, 0, 1, 128, 0, 0, 0 },
{ "ACE_ES_Dispatch_Queue-50000.us", 7, 0, 0, 0, 0,
   4, 0, 0, 1, 126, 0, 0, 0 },
{ "ACE_ES_Dispatch_Queue-100000.us", 8, 0, 0, 0, 0,
   4, 0, 0, 1, 124, 0, 0, 0 },
{ "ACE_ES_Dispatch_Queue-200000.us", 9, 0, 0, 0, 0,
   4, 0, 0, 1, 122, 0, 0, 0 },
{ "ACE_ES_Dispatch_Queue-1000000.us", 10, 0, 0, 0, 0,
   4, 0, 0, 1, 120, 0, 0, 0 },

{ "supplier_00", 11, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_01", 12, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_02", 13, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_03", 14, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_04", 15, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_05", 16, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_06", 17, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_07", 18, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_08", 19, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },
{ "supplier_09", 20, 20000, 20000, 20000, 250000,
   4, 0, 20000, 1, 127, 0, 0, 0 },

{ "consumer_00", 28, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_01", 29, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_02", 30, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_03", 31, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_04", 32, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_05", 33, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_06", 34, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_07", 35, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_08", 36, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 },
{ "consumer_09", 37, 20000, 20000, 20000, 0,
   4, 0, 20000, 0, 128, 0, 0, 0 }
};

static int runtime_infos_size = sizeof(runtime_infos)/sizeof(runtime_infos[0]);

static ACE_Scheduler_Factory::POD_Config_Info runtime_configs[] = {
{          0,        59, (RtecScheduler::Dispatching_Type_t) 0 }
};
static int runtime_configs_size = sizeof(runtime_configs)/sizeof(runtime_configs[0]);

// EOF
