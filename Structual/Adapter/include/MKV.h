#ifndef MKV_H
#define MKV_H

#include "AudioBase.h"
#include "IMP4Adapter.h"

class MKV : public AudioBase, 
            public IMP4Adapter {
  public:
    MKV(const std::string& content);
    std::string Convert() override;
};

#endif

