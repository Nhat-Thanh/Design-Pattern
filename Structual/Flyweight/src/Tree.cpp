#include "Tree.h"

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

