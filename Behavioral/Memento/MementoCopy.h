#ifndef MEMENTO_COPY_H
#define MEMENTO_COPY_H

#include "IMemento.h"

class MementoCopy : public IMemento {
  private:
    std::string m_CopiedText;

  public:
    MementoCopy(const std::string& text);
    std::string GetState() const override;
};

MementoCopy::MementoCopy(const std::string& text) : m_CopiedText(text) {}

std::string MementoCopy::GetState() const {
    return m_CopiedText;
}

#endif