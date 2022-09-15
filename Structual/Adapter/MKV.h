#ifndef MKV_H
#define MKV_H

#include "VideoExtention.h"

class MKV : public VideoExtension {
  public:
    MKV(const std::string& content);
    std::string GetExtension() const override;
};

MKV::MKV(const std::string& content) {
    m_Extension = "mkv";
    m_Content = content;
}

std::string MKV::GetExtension() const {
    return m_Extension;
}

#endif