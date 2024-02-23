#include <iostream>

class sizeOfClass {
    char a; // 1
    int b; // 4
    short c; // 2
    double d; // 8 - highest
};

/*
In memory:
    char(1 byte) padding(3 byte) int(4 byte) 
    short(2 byte) padding(6 byte)
    double(8 byte)
*/

int main() {
    sizeOfClass size;
    std::cout << sizeof(size) << std::endl;
    return 0;
}