SKETCH = src/helloWorld.cpp
BUILD_DIR = build
FLASH_FILE = flash/nodemcuv2/esp_flash.bin
FLASH_DEF = 4M
LWIP_VARIANT = hb2f

# Include user specific settings 
-include user_config.mk

UPLOAD_PORT ?= /dev/ttyS0
UPLOAD_SPEED ?= 115200
CHIP ?= esp8266
BOARD ?= nodemcuv2

include $(HOME)/makeEspArduino/makeEspArduino.mk