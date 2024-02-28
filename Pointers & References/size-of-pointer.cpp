#include <iostream>

int main() {
    int *ptr;
    /*
    size of pointer depend on CPU and compiler
    ex: CPU 32bit and compiler 32 bit have 4 byte pointer size, same as CPU 64 bit and compiler 32 bit
        CPU 32 bit - compiler 64 bit -> error
    */
    std::cout << sizeof(ptr) << std::endl; // 8 byte in CPU - compiler 64 bit
}

/*
extra question: 
Why not create a pointer data type and use syntax <Data Type>* <variable_name> ?
Ans:
Because each data type have different size...
*/