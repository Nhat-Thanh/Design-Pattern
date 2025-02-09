#ifndef VIDEO_CONVERTER_FACADE_H
#define VIDEO_CONVERTER_FACADE_H

#include "Video.h"
#include "libVideoConverter.h"

class VideoConverterFacade {
  private:
    VideoConverter m_Converter;

  public:
    VideoConverterFacade();
    Video Convert(const std::string& filename, const std::string& format);
    Video Convert(const Video& video, const std::string& format);
};

#endif

