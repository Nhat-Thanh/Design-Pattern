#include "PDFConvertVisitor.h"

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

