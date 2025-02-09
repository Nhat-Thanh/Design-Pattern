#ifndef MYVECTOR_H
#define MYVECTOR_H

#include "MyVectorIterator.h"
#include <initializer_list>
#include <stdexcept>

template <class T>
class MyVector {
  public:
    MyVector();
    MyVector(const int& vec_size, const T& value);
    MyVector(const MyVector<T>& vec);
    MyVector(const std::initializer_list<T>& values);
    MyVector(MyVector<T>&& vec);
    ~MyVector();

    T& operator[](const int& index);
    T operator[](const int& index) const;
    MyVectorIterator<T> begin() const;
    MyVectorIterator<T> end() const;

    bool empty() const;
    int size() const;
    int max_size() const;

    void clear();
    void insert(const T& value, const int& index);
    void erase(const int& index);
    void push_back(const T& value);
    void pop_back();
    void push_front(const T& value);
    void pop_front();

  private:
    T* m_Begin;
    T* m_End;
    T* m_Data;
    int m_Capacity;

  private:
    bool full_capacity() const;
    void reallocate();
    void check_out_of_range(const int& index) const;
};

template <class T>
void MyVector<T>::reallocate() {
    if (this->empty()) {
        m_Data = new T;
        m_Begin = m_Data;
        m_End = m_Data;
        m_Capacity = 1;
        return;
    }

    m_Capacity *= 2;
    T* new_data = new T[m_Capacity];
    int vec_size = this->size();
    for (int i = 0; i < vec_size; ++i) {
        new_data[i] = m_Data[i];
    }
    delete[] m_Data;
    m_Data = new_data;
    m_Begin = m_Data;
    m_End = m_Begin + vec_size;
}

template <class T>
void MyVector<T>::check_out_of_range(const int& index) const {
    if (index >= this->size() || index < 0) {
        throw std::out_of_range("The index is out of range\n");
    }
}

template <class T>
MyVector<T>::MyVector() {
    m_Begin = nullptr;
    m_End = nullptr;
    m_Data = nullptr;
    m_Capacity = 0;
}

template <class T>
MyVector<T>::MyVector(const int& vec_size, const T& value) {
    m_Capacity = vec_size * 2;
    m_Data = new T[m_Capacity];
    for (int i = 0; i < vec_size; ++i) {
        m_Data[i] = value;
    }
    m_Begin = m_Data;
    m_End = m_Begin + vec_size;
}

template <class T>
MyVector<T>::MyVector(const MyVector<T>& other) {
    m_Capacity = other.m_Capacity;
    m_Data = new T[m_Capacity];
    for (int i = 0; i < other.size(); ++i) {
        m_Data[i] = other.m_Data[i];
    }
    m_Begin = m_Data;
    m_End = m_Begin + other.size();
}

template <class T>
MyVector<T>::MyVector(const std::initializer_list<T>& values) {
    int vec_size = values.size();
    m_Capacity = vec_size * 2;
    m_Data = new T[m_Capacity];
    int i = 0;
    for (auto val : values) {
        m_Data[i++] = val;
    }
    m_Begin = m_Data;
    m_End = m_Begin + vec_size;
}

template <class T>
MyVector<T>::MyVector(MyVector<T>&& other) {
    m_Data = other.m_Data;
    m_Begin = other.m_Begin;
    m_End = other.m_End;
    m_Capacity = other.m_Capacity;

    other.m_Data = nullptr;
    other.m_Begin = nullptr;
    other.m_End = nullptr;
    other.m_Capacity = 0;
}

template <class T>
MyVector<T>::~MyVector() {
    if (m_Data != nullptr)
        delete[] m_Data;
    m_Data = nullptr;
    m_Begin = nullptr;
    m_End = nullptr;
    m_Capacity = 0;
}

template <class T>
MyVectorIterator<T> MyVector<T>::begin() const {
    MyVectorIterator<T> iterator(m_Begin);
    return iterator;
}

template <class T>
MyVectorIterator<T> MyVector<T>::end() const {
    MyVectorIterator<T> iterator(m_End);
    return iterator;
}

template <class T>
T& MyVector<T>::operator[](const int& index) {
    check_out_of_range(index);
    return m_Data[index];
}

template <class T>
T MyVector<T>::operator[](const int& index) const {
    check_out_of_range(index);
    return m_Data[index];
}

template <class T>
bool MyVector<T>::empty() const {
    return (m_Begin == nullptr);
}

template <class T>
bool MyVector<T>::full_capacity() const {
    return (this->size() >= this->max_size());
}

template <class T>
int MyVector<T>::size() const {
    if (this->empty())
        return 0;
    return m_End - m_Begin;
}

template <class T>
int MyVector<T>::max_size() const {
    return m_Capacity;
}

template <class T>
void MyVector<T>::clear() {
    if (m_Data != nullptr)
        delete[] m_Data;
    m_Data = nullptr;
    m_Begin = nullptr;
    m_End = nullptr;
    m_Capacity = 0;
}

template <class T>
void MyVector<T>::insert(const T& value, const int& index) {
    if (this->empty() || this->full_capacity()) {
        reallocate();
    }
    check_out_of_range(index);
    int last = this->size();
    for (; index < last; --last) {
        m_Data[last] = m_Data[last - 1];
    }
    m_Data[index] = value;
    ++m_End;
}

template <class T>
void MyVector<T>::erase(const int& index) {
    check_out_of_range(index);
    int last = this->size() - 1;
    for (int i = index; i < last; ++i) {
        m_Data[i] = m_Data[i + 1];
    }
    --m_End;
}

template <class T>
void MyVector<T>::push_back(const T& value) {
    if (this->empty() || this->full_capacity()) {
        reallocate();
    }
    *m_End = value;
    ++m_End;
}

template <class T>
void MyVector<T>::pop_back() {
    const int last = this->size() - 1;
    this->erase(last);
}

template <class T>
void MyVector<T>::push_front(const T& value) {
    if (this->empty() || this->full_capacity()) {
        reallocate();
    }
    for (int last = this->size(); last > 0; --last) {
        m_Data[last] = m_Data[last - 1];
    }
    m_Data[0] = value;
    ++m_End;
}

template <class T>
void MyVector<T>::pop_front() {
    this->erase(0);
}

#endif     // VECTOR_H
