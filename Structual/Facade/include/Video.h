#ifndef VIDEO_H
#define VIDEO_H

#include <algorithm>
#include <string>

class Video {
  private:
    std::string m_Filename;

  public:
    Video();
    Video(const std::string& filename);
    void LoadFile(const std::string& filename);
    std::string GetFormat() const;
    std::string GetName() const;
    std::string GetFileName() const;
};

Video::Video() : m_Filename("") {}

Video::Video(const std::string& filename) : m_Filename(filename) {}

void Video::LoadFile(const std::string& filename) {
    m_Filename = filename;
}

std::string Video::GetFormat() const {
    auto it = std::find(m_Filename.rbegin(), m_Filename.rend(), '.');
    std::string format = std::string(m_Filename.rbegin(), it);
    std::reverse(format.begin(), format.end());
    return format;
}

std::string Video::GetName() const {
    auto it = std::find(m_Filename.rbegin(), m_Filename.rend(), '.');
    std::string name = std::string(it, m_Filename.rend());
    std::reverse(name.begin(), name.end());
    return name;
}

std::string Video::GetFileName() const {
    return m_Filename;
}

#endif
