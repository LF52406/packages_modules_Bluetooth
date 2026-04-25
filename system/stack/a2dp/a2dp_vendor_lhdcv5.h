#ifndef A2DP_VENDOR_LHDCV5_H
#define A2DP_VENDOR_LHDCV5_H

#include "a2dp_codec_api.h"
#include "btav_a2dp_codec_config_t.h"

class A2dpCodecConfigLhdcv5Source : public A2dpCodecConfig {
 public:
  A2dpCodecConfigLhdcv5Source(btav_a2dp_codec_priority_t codec_priority);
  virtual ~A2dpCodecConfigLhdcv5Source();

  bool init() override;
  uint8_t getAudioBitsPerSample() override;
};

#endif
