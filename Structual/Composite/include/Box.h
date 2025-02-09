#ifndef BOX_H
#define BOX_H

#include "IComponent.h"
#include <list>

class Box : public IComponent {
  private:
    std::list<IComponent*> m_Products;

  public:
    void Add(IComponent* product);
    void Remove(IComponent* product);
    float GetPrice() const override;
};

#endif

