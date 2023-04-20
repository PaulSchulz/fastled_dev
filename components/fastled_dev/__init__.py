import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.components import light
from esphome.const import (
    CONF_ID,
    CONF_OUTPUT_ID,
    CONF_OUTPUT
)

CODEOWNERS = ["@PaulSchulz"]
fastled_dev_ns = cg.esphome_ns.namespace('fastled_dev')
FastLEDDev = fastled_dev_ns.class_('FastLEDDev', cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(FastLEDDev),
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)
