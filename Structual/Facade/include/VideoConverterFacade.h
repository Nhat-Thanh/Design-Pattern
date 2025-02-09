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

VideoConverterFacade::VideoConverterFacade() {
    m_Converter = VideoConverter();
}

Video VideoConverterFacade::Convert(const std::string& filename, const std::string& format) {
    Video video(filename);
    m_Converter = VideoConverter(video);
    m_Converter.Encode();
    video = m_Converter.Convert(format);
    return video;
}

Video VideoConverterFacade::Convert(const Video& video, const std::string& format) {
    m_Converter = VideoConverter(video);
    m_Converter.Encode();
    return m_Converter.Convert(format);
}

#endif
