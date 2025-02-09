#ifndef MP4_H
#define MP4_H

#include "VideoExtention.h"

class MP4 : public VideoExtension {
  public:
    MP4(const std::string& content);
    std::string GetExtension() const override;
};

MP4::MP4(const std::string& content) {
    m_Extension = "mp4";
    m_Content = content;
}

std::string MP4::GetExtension() const {
    return m_Extension;
}

#endif