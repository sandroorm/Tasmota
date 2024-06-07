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


#define USE_SCRIPT_JSON_EXPORT
#define USE_SCRIPT_WEB_DISPLAY
#define USE_SCRIPT_HUE
#define USE_SCRIPT_SUB_COMMAND
#define USE_SCRIPT_I2C
#define USE_SCRIPT_STATUS
#define SUPPORT_MQTT_EVENT
#define SCRIPT_FULL_WEBPAGE
#define USE_WEBSEND_RESPONSE
