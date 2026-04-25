#define LOG_TAG "a2dp_vendor_lhdcv5"
#include "a2dp_vendor_lhdcv5.h"
#include <bluetooth/log.h>
#include "a2dp_vendor_lhdcv5_encoder.h"

A2dpCodecConfigLhdcv5Source::A2dpCodecConfigLhdcv5Source(btav_a2dp_codec_priority_t codec_priority)
    : A2dpCodecConfig(BTAV_A2DP_CODEC_INDEX_SOURCE_LHDCV5, "LHDC V5", codec_priority) {}

A2dpCodecConfigLhdcv5Source::~A2dpCodecConfigLhdcv5Source() {}

bool A2dpCodecConfigLhdcv5Source::init() {
  return true;
}

uint8_t A2dpCodecConfigLhdcv5Source::getAudioBitsPerSample() {
  return 24;
}
