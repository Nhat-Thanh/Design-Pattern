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

#endif

