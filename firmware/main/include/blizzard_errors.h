/* Copyright (C) Blizzard Lighting LLC. - All Rights Reserved
 * Unauthorized copying of this file, via any medium is strictly prohibited
 * Proprietary and confidential
 * Written by Christian Krueger <christian@blizzardlighting.com>, January 2018
 *
 * Global Defines-> blizzard_errors.h
 *
 */

#ifndef BLIZZARD_ERRORS_H
#define BLIZZARD_ERRORS_H

#ifdef __cplusplus
extern "C" {
#endif

#define SUCCESS 0

//NVS Errors
#define NVS_ERROR 1
#define NVS_PARAMETER_ERROR 2
#define NVS_TYPE_ERROR 3
#define NVS_DNE_ERROR 4
#define NVS_STRING_ERROR 5

//File Errors
#define VFS_ERROR 10
#define FILE_PARAMETER_ERROR 11
#define FILE_OPEN_ERROR 12
#define FILE_CLOSE_ERROR 13
#define FILE_WRITE_ERROR 14
#define FILE_SEEK_ERROR 15
#define FILE_READ_ERROR 16
#define FILE_REMOVE_ERROR 17
#define FILE_NO_MEDIA_ERROR 18

//Protocol Errors
#define PROTOCOL_UNKOWN_ERROR 20

//DMX Errors
#define DMX_GPIO_ERROR 20
#define DMX_UART_ERROR 21
#define DMX_SET_PIN_ERROR 22
#define DMX_INSTALL_DRIVER_ERROR 23
#define DMX_TX_IDLE_ERROR 24
#define DMX_SET_INTERRUPT_ERROR 25
#define DMX_DIRECTION_ERROR 26
#define DMX_NULL_ARRAY_ERROR 27

//Artnet Errors
#define ARTNET_GET_MUTEX_ERROR 30
#define ARTNET_NEW_UDP_ERROR 31
#define ARTNET_BIND_ERROR 32
#define ARTNET_ALLOC_PACKET_ERROR 33
#define ARTNET_UDP_CONNECT_ERROR 34
#define ARTNET_UDP_SEND_ERROR 35
#define ARTNET_SLOT_ERROR 36
#define ARTNET_NET_ERROR 37
#define ARTNET_SUBNET_ERROR 38
#define ARTNET_UNIVERSE_ERROR 39
#define ARTNET_MERGE_ERROR 40
#define ARTNET_DMX_BUFFER_ERROR 41
#define ARTNET_ADDRESS_COMMAND_ERROR 42
#define ARTNET_NULL_PACKET_ERROR 43
#define ARTNET_NULL_IP_ERROR 44
#define ARTNET_NULL_DATA_ERROR 45
#define ARTNET_BAD_FIRMWARE_TYPE_ERROR 46
#define ARTNET_QUE_PUSH_ERROR 47

//SACN Errors
#define SACN_GET_MUTEX_ERROR 40
#define SACN_NEW_UDP_ERROR 41
#define SACN_BIND_ERROR 42
#define SACN_LARGE_UNIVERSE_ERROR 43

//Connection Errors
#define CONNECTION_WIFI_EVENT_CREATE_ERROR 55
#define CONNECTION_ETHERNET_EVENT_CREATE_ERROR 56
#define CONNECTION_GET_MUTEX_ERROR 57
#define CONNECTION_START_ETHERNET_ERROR 58
#define CONNECTION_START_AP_ERROR 59
#define CONNECTION_START_STA_ERROR 59
#define CONNECTION_STOP_WIFI_ERROR 60
#define CONNECTION_DHCP_MEDIUM_ERROR 61
#define CONNECTION_CONFIGURE_IP_ERROR 62
#define CONNECTION_GET_IP_INFO_ERROR 63
#define CONNECTION_GET_IP_ERROR 64
#define CONNECTION_GET_NVS_IP_ERROR 65
#define CONNECTION_SET_IP_ERROR 65
#define CONNECTION_SET_DHCP_ERROR 66
#define CONNECTION_BAD_SSID_ERROR 67
#define CONNECTION_BAD_PASS_ERROR 68
#define CONNECTION_BAD_AP_PASS_ERROR 11 //has to be 11

//Action Errors
#define ACTION_NULL_DATA_ERROR 71
#define ACTION_BAD_ACTION_ERROR 72
#define ACTION_NULL_JSON_ERROR 73
#define ACTION_JSON_CREATE_ERROR 74
#define ACTION_JSON_PARSE_ERROR 75
#define ACTION_JSON_ITEM_ERROR 76

//OTA Errors
#define OTA_NULL_PARTITION_ERROR 90
#define OTA_START_ERROR 91
#define OTA_WRITE_ERROR 92
#define OTA_NULL_BUFFER_ERROR 93
#define OTA_END_ERROR 94
#define OTA_SET_BOOT_PARTITION_ERROR 95

//Button Errors
#define BUTTON_CONFIG_ERROR 100

//Timer Errors
#define TIMER_INIT_ERROR 110
#define TIMER_PAUSE_ERROR 111
#define TIMER_SET_COUNTER_ERROR 112
#define TIMER_ALARM_ERROR 113
#define TIMER_INTERRUPT_ENABLE_ERROR 114
#define TIMER_ISR_REGISTER_ERROR 115
#define TIMER_START_ERROR 116

//Indication Errors
#define INDICATION_CONFIG_ERROR 120
#define INDICATION_COLOR_ERROR 121
#define INDICATION_STATE_ERROR 122

//Test Errors
#define TEST_TIMEOUT_ERROR 80
#define TEST_UNEXPECTED_STATE_ERROR 81

//WiFi Errors
#define BAD_PASS_ERROR 99
#define BAD_SSID_ERROR 100
#define BAD_WIFI_ERROR 101
#define WIFI_OK 0

//Show Errors
#define SHOW_PARTITION_ERROR 150
#define SHOW_WRITE_ERROR 151
#define SHOW_READ_ERROR 152
#define SHOW_BAD_MAGIC_ERROR 153
#define SHOW_BAD_LENGTH_ERROR 154
#define SHOW_BAD_SEEK_ERROR 155

#define HELPER_ERRORS 160

#define ERROR_ERROR 0xFF

#ifdef __cplusplus
}
#endif

#endif