#include <iostream>
#include <string>


template <typename T> T Max(T x, T y) {
    return (x > y) ? x : y;
} 

int main() {
    std::cout << Max<int>(1, 0) << std::endl;

    std::cout << Max<double>(3.5, 7.8) << std::endl;

    std::cout << Max<char>('y', 'x') << std::endl;

    std::cout << Max(9.8, 1.2) << std::endl; 
    return 0; 
}