#include "libVideoConverter.h"

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

