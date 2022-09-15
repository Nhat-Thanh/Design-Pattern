#ifndef APPLE_TREE_H
#define APPLE_TREE_H

#include "ISharedObject.h"

class AppleTree : public ISharedObject {
  private:
    float m_Height;

  public:
    AppleTree(const float& height);
    std::string GetKey() const override;
    std::string GetName() const override;
};

AppleTree::AppleTree(const float& height) : m_Height(height) {}

std::string AppleTree::GetKey() const {
    return std::to_string(m_Height);
}

std::string AppleTree::GetName() const {
    std::string name("[Apple tree ");
    name.append(std::to_string(m_Height));
    name.append("]");
    return name;
}

#endif
