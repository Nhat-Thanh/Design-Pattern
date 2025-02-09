#ifndef BASE_ITERATOR_H
#define BASE_ITERATOR_H

template <class T>
class IIterator {
  protected:
    virtual T* Next() = 0;
    virtual T* Prev() = 0;
};

#endif