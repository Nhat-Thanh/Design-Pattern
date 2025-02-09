#ifndef TXT_FILE_H
#define TXT_FILE_H

#include <string>

class TxtFile {
  private:
    std::string m_Text;

  public:
    TxtFile(const std::string& text);
    void SetText(const std::string& text);
    std::string GetText() const;
};

#endif

