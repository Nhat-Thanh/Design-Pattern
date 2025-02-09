#ifndef LIB_VIDEO_CONVERTER_H
#define LIB_VIDEO_CONVERTER_H

#include "Video.h"

class VideoConverter {
  private:
    Video m_Video;

  public:
    VideoConverter();
    VideoConverter(Video video);
    void Encode();
    Video Convert(const std::string& format);
    void Decode();
};

#endif

