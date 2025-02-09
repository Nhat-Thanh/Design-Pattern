#include "MementoCopy.h"

MementoCopy::MementoCopy(const std::string& text) : m_CopiedText(text) {}

std::string MementoCopy::GetState() const {
    return m_CopiedText;
}

