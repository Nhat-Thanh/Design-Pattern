


#include "ITextFileConvertVisitor.h"

class ITextFileComponent {
  public:
    virtual std::string Convert(ITextFileConvertVisitor* visitor) = 0;
};

