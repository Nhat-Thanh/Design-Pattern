#ifndef PDF_CONVERT_VISITOR
#define PDF_CONVERT_VISITOR

#include "ITextFileConvertVisitor.h"
#include "DocFileComponent.h"
#include "TxtFileComponent.h"

class PDFConvertVisitor : public ITextFileConvertVisitor {
  public:
    std::string ConvertDoc(DocFileComponent* component) override;
    std::string ConvertTxt(TxtFileComponent* component) override;
};

#endif

