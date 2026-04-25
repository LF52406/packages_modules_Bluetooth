#define LOG_TAG "a2dp_vendor_lhdc"
#include "a2dp_vendor_lhdc.h"
#include <bluetooth/log.h>
#include "a2dp_vendor_lhdc_encoder.h"

A2dpCodecConfigLhdcSource::A2dpCodecConfigLhdcSource(btav_a2dp_codec_priority_t codec_priority)
    : A2dpCodecConfig(BTAV_A2DP_CODEC_INDEX_SOURCE_LHDC, "LHDC", codec_priority) {}

A2dpCodecConfigLhdcSource::~A2dpCodecConfigLhdcSource() {}

bool A2dpCodecConfigLhdcSource::init() {
  return true;
}

uint8_t A2dpCodecConfigLhdcSource::getAudioBitsPerSample() {
  return 24;
}
