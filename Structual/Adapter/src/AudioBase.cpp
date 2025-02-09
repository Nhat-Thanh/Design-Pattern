#include "AudioBase.h"

AudioBase::AudioBase(const std::string& content) : m_Content(content) {}

std::string AudioBase::GetContent() const {
    return m_Content;
}

