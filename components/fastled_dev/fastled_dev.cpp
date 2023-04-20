#include "esphome.h"
#include "esphome/core/log.h"
#include "fastled_dev.h"

#include <Arduino.h>
#include <FastLED.h>
#define NUM_LEDS 8
CRGB leds[NUM_LEDS];

#define PIN_NEOPIXEL 48
#define BRIGHTNESS 10   // Range: 0-255

namespace esphome {
    namespace fastled_dev {

        static const char *const TAG = "fastled_dev";

        void FastLEDDev::setup() {
            ESP_LOGD(TAG, "Setting up FastLED light...");

            FastLED.addLeds<NEOPIXEL, PIN_NEOPIXEL>(leds, NUM_LEDS);
            FastLED.setBrightness(BRIGHTNESS);

            for(int i=0; i<NUM_LEDS; i++){
                leds[i] = 0x00FF00;
            }
            FastLED.show();
        }

        void FastLEDDev::loop() {

        }

        void FastLEDDev::dump_config() {
            ESP_LOGD(TAG, "FastLED light:");
            ESP_LOGD(TAG, "  Num LEDs: %u", NUM_LEDS);
        }

    }  // namespace fastled_dev
}  // namespace esphome
