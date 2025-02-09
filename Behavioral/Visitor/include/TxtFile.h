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

TxtFile::TxtFile(const std::string& text) : m_Text(text) {}

void TxtFile::SetText(const std::string& text) {
    m_Text = text;
}

std::string TxtFile::GetText() const {
    return m_Text;
}

#endif