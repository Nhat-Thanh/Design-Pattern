#ifndef ITEXT_FILE_COMPONENT_H
#define ITEXT_FILE_COMPONENT_H

#include "ITextFileConvertVisitor.h"

class ITextFileComponent {
  public:
    virtual std::string Convert(ITextFileConvertVisitor* visitor) = 0;
};

#endif
