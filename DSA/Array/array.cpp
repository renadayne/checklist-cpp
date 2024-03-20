#include "array.hpp"

template <typename T, size_t N>
T& Array<T, N>::operator[](size_t index) {
    return data[index];
}


// template <typename T, size_t N>
// const T& Array<T, N>::operator[](size_t index) const {
//     return data[index];
// }

template <typename T, size_t N>
size_t Array<T, N>::size() const {
    return N;
}

