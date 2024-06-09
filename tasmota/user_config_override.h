#ifndef USE_VEML6070
#undef USE_VEML6070       // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38, 0x39) (+0k8 code)
#endif

#ifndef USE_AHT1x
#define USE_AHT1x       // [I2cDriver43] Enable AHT10/15 humidity and temperature sensor (I2C address 0x38, 0x39) (+0k8 code)
#endif

#ifndef USE_SCRIPT
#define USE_SCRIPT  // adds about 17k flash size, variable ram size
#endif
#ifdef USE_RULES
#undef USE_RULES
#endif

#ifndef USE_MQTT_TLS 
#define USE_MQTT_TLS                             // Use TLS for MQTT connection (+34.5k code, +7.0k mem and +4.8k additional during connection handshake)
#define MQTT_TLS_ENABLED       true              // [SetOption103] Enable TLS mode (requires TLS version)
//  #define USE_MQTT_TLS_CA_CERT                   // Force full CA validation instead of fingerprints, slower, but simpler to use.  (+2.2k code, +1.9k mem during connection handshake)
                                                   // This includes the LetsEncrypt CA in tasmota_ca.ino for verifying server certificates
//  #define USE_MQTT_TLS_FORCE_EC_CIPHER           // Force Elliptic Curve cipher (higher security) required by some servers (automatically enabled with USE_MQTT_AWS_IOT) (+11.4k code, +0.4k mem)
#endif

#define MQTT_PORT              8883              // [MqttPort] MQTT port (10123 on CloudMQTT)


#define USE_SCRIPT_JSON_EXPORT
#define USE_SCRIPT_WEB_DISPLAY
#define USE_SCRIPT_HUE
#define USE_SCRIPT_SUB_COMMAND
#define USE_SCRIPT_I2C
#define USE_SCRIPT_STATUS
#define SUPPORT_MQTT_EVENT
#define SCRIPT_FULL_WEBPAGE
#define USE_WEBSEND_RESPONSE