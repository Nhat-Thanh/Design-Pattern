#include "VideoConverterFacade.h"

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

