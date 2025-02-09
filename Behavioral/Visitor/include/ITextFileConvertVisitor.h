#ifndef ITEXT_FILE_CONVERT_VISITOR
#define ITEXT_FILE_CONVERT_VISITOR

#include <string>

class DocFileComponent;
class TxtFileComponent;

class ITextFileConvertVisitor {
  public:
    virtual std::string ConvertDoc(DocFileComponent* component) = 0;
    virtual std::string ConvertTxt(TxtFileComponent* component) = 0;
};

#endif