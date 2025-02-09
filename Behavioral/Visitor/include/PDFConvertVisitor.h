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

std::string PDFConvertVisitor::ConvertDoc(DocFileComponent* component) {
    std::string text("Convert doc to PDF: ");
    text.append(component->GetText());
    return text;
}

std::string PDFConvertVisitor::ConvertTxt(TxtFileComponent* component) {
    std::string text("Convert txt to PDF: ");
    text.append(component->GetText());
    return text;
}

#endif