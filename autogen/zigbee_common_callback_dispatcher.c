/***************************************************************************//**
 * @file zigbee_common_callback_dispatcher.c
 * @brief ZigBee common dispatcher definitions.
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * The licensor of this software is Silicon Laboratories Inc. Your use of this
 * software is governed by the terms of Silicon Labs Master Software License
 * Agreement (MSLA) available at
 * www.silabs.com/about-us/legal/master-software-license-agreement. This
 * software is distributed to you in Source Code format and is governed by the
 * sections of the MSLA applicable to Source Code.
 *
 ******************************************************************************/

#include PLATFORM_HEADER
#include "stack/include/sl_zigbee.h"
#include "sl_zigbee_system_common.h"
#include "zigbee_common_callback_dispatcher.h"

void sli_zigbee_af_event_init(void)
{
  sli_zigbee_af_zcl_framework_core_init_events_callback(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sli_zigbee_af_service_discovery_init_events_callback(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sli_ble_application_init(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sl_dmp_ui_init(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sl_zigbee_af_green_power_client_init_cb(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sl_zigbee_af_interpan_init_cb(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sl_zigbee_af_reporting_init_cb(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sli_zigbee_af_scan_dispatch_init_callback(SL_ZIGBEE_INIT_LEVEL_EVENT);
  sli_zigbee_af_zll_identify_server_init_callback(SL_ZIGBEE_INIT_LEVEL_EVENT);
}

void sli_zigbee_af_local_data_init(void)
{
  sli_ble_application_init(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
  sl_zigbee_af_concentrator_init_cb(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
  sl_zigbee_af_counters_init_cb(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
  sl_dmp_ui_init(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
  sl_zigbee_af_green_power_client_init_cb(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
  sl_zigbee_af_interpan_init_cb(SL_ZIGBEE_INIT_LEVEL_LOCAL_DATA);
}

void sli_zigbee_af_init_done(void)
{
  sli_zigbee_af_init_cb(SL_ZIGBEE_INIT_LEVEL_DONE);
  sli_zigbee_zcl_cli_init(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_zigbee_af_init(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_dmp_ui_init(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_zigbee_af_green_power_client_init_cb(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_zigbee_af_network_creator_security_init_cb(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_zigbee_af_reporting_init_cb(SL_ZIGBEE_INIT_LEVEL_DONE);
  sl_zigbee_af_zll_commissioning_common_init_cb(SL_ZIGBEE_INIT_LEVEL_DONE);
  sli_zigbee_af_network_init(SL_ZIGBEE_INIT_LEVEL_DONE);
}


void sli_zigbee_af_tick(void)
{
}
