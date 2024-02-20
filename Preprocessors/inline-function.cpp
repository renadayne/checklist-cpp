#include <iostream>
// different between inline function with normal var and static var

inline int hello() {
    // int a = 5;
    static int a = 5; 
    return a;
}

int main() {
    int a = hello();
    std::cout << a << std::endl;
    return 0;
}