#include <iostream>
#include <string>

template<typename T>

void print(T value) {
    std::cout << value << std::endl;
}

void print(int value) {
    std::cout << value << std::endl;
}

void print(double value) {
    std::cout << value << std::endl;
}
int main() {
    print(1);
    print("Hello World");
    print(5.5);
    return 0;
}