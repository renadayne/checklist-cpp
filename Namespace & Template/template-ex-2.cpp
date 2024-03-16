#include <iostream>
#include <string>


template <typename T, typename T1> T Max(T x, T1 y) { // add T1 data type 
    return (x > y) ? x : y;
} 

int main() {
    std::cout << Max<int>(1, 0) << std::endl;

    std::cout << Max<double>(3.5, 7.8) << std::endl;

    std::cout << Max<char>('y', 'x') << std::endl;

    std::cout << Max(9.8, 1) << std::endl;  // double, int - no error because declare T1
    return 0; 
}