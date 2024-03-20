#ifndef ARRAY_H
#define ARRAY_H


template <typename T, size_t N>
class Array {
private:
    T data[N];

public:
    // access method of array
    T& operator[](size_t index);

    const T& operator[](size_t index) const;

    // return size of array
    size_t size() const;
};

#include "array.cpp" // include template

#endif
