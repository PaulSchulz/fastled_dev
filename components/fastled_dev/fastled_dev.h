#pragma once

#include "esphome/core/component.h"

namespace esphome {
    namespace fastled_dev {

        class FastLEDDev : public Component {
        public:
            void setup() override;
            void loop() override;
            void dump_config() override;

        };
    }  // namespace fastled_dev
}  // namespace esphome
