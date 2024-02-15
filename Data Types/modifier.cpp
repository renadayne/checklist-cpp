#include <iostream>
#include <cstdint>
#include <typeinfo>

int main() {
    unsigned int n = 0; // store only non-negative integer values
    signed int a; // store positive, negative integers, and zero
    long long int b; // -2^63 -> 2^63 - 1, double memory compared to long or int
    uint8_t c = 'c'; // 0 -> 2^8 - 1 -> unsigned char
    int64_t d; // -2^63 -> 2^63-1 -> long long int
    int32_t e;  // -2^31 -> 2^31 - 1 -> int

    int g = sizeof(a);
    std::cout << "size of g is: " << g << std::endl;
    std::cout << typeid(c).name() << std::endl;
    n = n - 1; // value range unsigned 0 <-> maxium of data types
    std::cout << n << std::endl; // n now is equal maximum of int 2^31 - 1
    return 0;
}