#ifndef LIB_VIDEO_CONVERTER_H
#define LIB_VIDEO_CONVERTER_H

#include "Video.h"
#include <string>

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

VideoConverter::VideoConverter() {
    m_Video = Video("");
}

VideoConverter::VideoConverter(Video video) : m_Video(video){};

void VideoConverter::Encode() {}

void VideoConverter::Decode() {}

Video VideoConverter::Convert(const std::string& format) {
    std::string name = m_Video.GetName();
    name.append(format);
    return Video(name);
}

#endif
