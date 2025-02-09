#ifndef EDGE_H
#define EDGE_H

#include "IPrototype.h"
#include <string>

class Edge : public IPrototype {
  private:
    std::string m_Version;

  public:
    Edge(const std::string& version);
    IPrototype* Clone() const override;
    void PrintInfo() const override;
};

#endif

