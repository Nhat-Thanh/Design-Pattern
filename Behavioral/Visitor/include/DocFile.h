#ifndef DOC_FILE_H
#define DOC_FILE_H

#include "TxtFile.h"

class DocFile : public TxtFile {
  public:
    DocFile(const std::string& text);
};

#endif

