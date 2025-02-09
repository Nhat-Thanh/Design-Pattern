#include "PDFConvertVisitor.h"
#include <iostream>

int main() {
    DocFile doc_file("This is a .doc file");
    TxtFile txt_file("This is a .txt file");
    DocFileComponent doc_file_component(&doc_file);
    TxtFileComponent txt_file_component(&txt_file);

    PDFConvertVisitor visitor;

    std::cout << doc_file_component.Convert(&visitor) << std::endl;
    std::cout << txt_file_component.Convert(&visitor) << std::endl;

    return 0;
}