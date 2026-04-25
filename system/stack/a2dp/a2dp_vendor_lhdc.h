#ifndef A2DP_VENDOR_LHDC_H
#define A2DP_VENDOR_LHDC_H

#include "a2dp_codec_api.h"
#include "btav_a2dp_codec_config_t.h"

class A2dpCodecConfigLhdcSource : public A2dpCodecConfig {
 public:
  A2dpCodecConfigLhdcSource(btav_a2dp_codec_priority_t codec_priority);
  virtual ~A2dpCodecConfigLhdcSource();

  bool init() override;
  uint8_t getAudioBitsPerSample() override;
};

#endif
