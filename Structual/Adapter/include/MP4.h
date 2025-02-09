#ifndef MP4_H
#define MP4_H

#include "AudioBase.h"

class MP4 : public AudioBase{
  public:
    MP4(const std::string& content);
};

#endif

