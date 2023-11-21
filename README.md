# Esp8266 Arduino Hello World Demo

A sample hello world application for the esp8266.

## Configuration
Add a user_config.mk file to add user specific config.

Sample user_config.mk file:
```
UPLOAD_PORT = /dev/ttyS12

BUILD_EXTRA_FLAGS = -DAPSSID="\"Some other name\"" -DAPPASS="\"aGoodPassword\""
```
## Dependencies
- [makeEspArduino](https://github.com/plerup/makeEspArduino) (tested with v6.9.4)
- [Arduino core for ESP8266 WiFi chip](https://github.com/esp8266/Arduino) (tested with v3.1.2)
