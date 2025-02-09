#ifndef AVI_H
#define AVI_H

#include "AudioBase.h"
#include "IMP4Adapter.h"

class AVI : public AudioBase,
            public IMP4Adapter {
  public:
    AVI(const std::string& content);
    std::string Convert() override;
};

#endif

