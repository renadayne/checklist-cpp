#include <iostream>
#include "array.hpp"

int main() {
    Array<int, 10> arr;

    for (size_t i = 0; i < 5; ++i) {
        arr[i] = i * 2;
    }

    std::cout << "Array elements: ";
    for (size_t i = 0; i < 5; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << arr.size() << std::endl;

    return 0;
}
