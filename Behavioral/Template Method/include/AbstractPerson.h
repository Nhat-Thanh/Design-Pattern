#ifndef ABSTRACT_PERSON_H
#define ABSTRACT_PERSON_H

#include <string>

class AbstractPerson {
  protected:
    void Prepare();
    virtual void Go(const std::string& destination) = 0;

  public:
    void GotoVietnam();
};

#endif
