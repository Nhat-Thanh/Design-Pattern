#include "TxtFile.h"

TxtFile::TxtFile(const std::string& text) : m_Text(text) {}

void TxtFile::SetText(const std::string& text) {
    m_Text = text;
}

std::string TxtFile::GetText() const {
    return m_Text;
}

