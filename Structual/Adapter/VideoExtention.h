#ifndef VIDEO_EXTENSIONS_H
#define VIDEO_EXTENSIONS_H

#include <string>

class VideoExtension {
  protected:
    std::string m_Extension;
    std::string m_Content;

  public:
    std::string GetContent() const;
    virtual std::string GetExtension() const = 0;
};

std::string VideoExtension::GetContent() const {
    return m_Content;
}

#endif