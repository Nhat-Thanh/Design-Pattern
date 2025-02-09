#ifndef EDGE_H
#define EDGE_H

#include "IPrototype.h"
#include <iostream>
#include <string>

class Edge : public IPrototype {
  private:
    std::string m_Version;

  public:
    Edge(const std::string& version);
    IPrototype* Clone() const override;
    void PrintInfo() const override;
};

Edge::Edge(const std::string& version) {
    m_Version = version;
}

IPrototype* Edge::Clone() const {
    return new Edge(*this);
}

void Edge::PrintInfo() const {
    std::cout << "I'm Microsoft Edge - version: " << m_Version << '\n';
}

#endif
