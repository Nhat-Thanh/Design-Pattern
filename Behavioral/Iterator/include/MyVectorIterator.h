#ifndef MYVECTOR_ITERATOR_H
#define MYVECTOR_ITERATOR_H

#include "IIterator.h"
#include <ostream>

template <class T>
class MyVectorIterator : public IIterator<T> {
  protected:
    T* m_Iterator = nullptr;
    T* Next() override;
    T* Prev() override;

  public:
    MyVectorIterator(const MyVectorIterator<T>& other);
    MyVectorIterator(T* iterator);
    ~MyVectorIterator();

    T& operator*() const;
    MyVectorIterator& operator++();
    MyVectorIterator& operator--();
    const MyVectorIterator operator++(int);
    const MyVectorIterator operator--(int);

    bool operator==(const MyVectorIterator<T>& other) const;
    bool operator!=(const MyVectorIterator<T>& other) const;
    void operator+=(const size_t& size_);
    void operator-=(const size_t& size_);

    const MyVectorIterator<T> operator+(const size_t& size_);
    const MyVectorIterator<T> operator-(const size_t& size_);

    std::ostream& print(std::ostream& os) const;
};

template <class T>
MyVectorIterator<T>::MyVectorIterator(const MyVectorIterator<T>& other) {
    m_Iterator = other.m_Iterator;
}

template <class T>
MyVectorIterator<T>::MyVectorIterator(T* iterator) {
    m_Iterator = iterator;
}

template <class T>
MyVectorIterator<T>::~MyVectorIterator() {
    m_Iterator = nullptr;
}

template <class T>
T* MyVectorIterator<T>::Next() {
    return (m_Iterator + 1);
}

template <class T>
T* MyVectorIterator<T>::Prev() {
    return (m_Iterator - 1);
}

template <class T>
T& MyVectorIterator<T>::operator*() const {
    return *m_Iterator;
}

template <class T>
MyVectorIterator<T>& MyVectorIterator<T>::operator++() {
    m_Iterator = this->Next();
    return *this;
}

template <class T>
MyVectorIterator<T>& MyVectorIterator<T>::operator--() {
    m_Iterator = this->Prev();
    return *this;
}

template <class T>
const MyVectorIterator<T> MyVectorIterator<T>::operator++(int) {
    MyVectorIterator temp = *this;
    ++(*this);
    return temp;
}

template <class T>
const MyVectorIterator<T> MyVectorIterator<T>::operator--(int) {
    --(*this);
    return *this;
}

template <class T>
bool MyVectorIterator<T>::operator==(const MyVectorIterator<T>& other) const {
    return m_Iterator == other.m_Iterator;
}

template <class T>
bool MyVectorIterator<T>::operator!=(const MyVectorIterator<T>& other) const {
    return m_Iterator != other.m_Iterator;
}

template <class T>
void MyVectorIterator<T>::operator+=(const size_t& size_) {
    for (size_t i = 0; i < size_; ++i) {
        m_Iterator = this->Next();
    }
}

template <class T>
void MyVectorIterator<T>::operator-=(const size_t& size_) {
    for (size_t i = 0; i < size_; ++i) {
        m_Iterator = this->Prev();
    }
}

template <class T>
const MyVectorIterator<T> MyVectorIterator<T>::operator+(const size_t& size_) {
    MyVectorIterator<T> temp = *this;
    for (size_t i = 0; i < size_; ++i) {
        temp += 1;
    }
    return temp;
}

template <class T>
const MyVectorIterator<T> MyVectorIterator<T>::operator-(const size_t& size_) {
    MyVectorIterator<T> temp = *this;
    for (size_t i = 0; i < size_; ++i) {
        temp -= 1;
    }
    return temp;
}

template <class T>
std::ostream& MyVectorIterator<T>::print(std::ostream& os) const {
    os << m_Iterator;
    return os;
}

template <class T>
std::ostream& operator<<(std::ostream& os, const MyVectorIterator<T>& iterator) {
    return iterator.print(os);
}

#endif