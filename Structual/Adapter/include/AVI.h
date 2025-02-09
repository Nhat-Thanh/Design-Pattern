#ifndef AVI_H
#define AVI_H

#include "VideoExtention.h"

class AVI : public VideoExtension {
  public:
    AVI(const std::string& content);
    std::string GetExtension() const override;
};

AVI::AVI(const std::string& content) {
    m_Extension = "avi";
    m_Content = content;
}

std::string AVI::GetExtension() const {
    return m_Extension;
}

#endif