#ifndef VIDEO_H
#define VIDEO_H

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

#endif

