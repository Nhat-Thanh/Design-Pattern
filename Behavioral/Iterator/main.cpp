#include "MyVector.h"
#include "MyVectorIterator.h"
#include <iostream>

template <class T>
void PrintVector(const MyVector<T>& vec) {
    for (MyVectorIterator<T> it = vec.begin(); it != vec.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

template <class T>
void PrintVector_n(const MyVector<T>& vec, const size_t& n) {
    for (MyVectorIterator<T> it = vec.begin(); it != (vec.begin() + n); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    MyVector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    PrintVector(vec);
    MyVectorIterator<int> it = vec.begin();
    it += 3;
    *it = 20;
    std::cout << it << std::endl;
    PrintVector(vec);
    PrintVector_n(vec, 5);
    return 0;
}