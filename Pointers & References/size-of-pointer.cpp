#include <iostream>

int main() {
    int *ptr;
    /*
    size of pointer depend on CPU and compiler
    ex: CPU Architechture 32bit and compiler 32 bit have 4 byte pointer size, same as CPU 64 bit and compiler 32 bit
        CPU 32 bit - compiler 64 bit -> error
    extra explain: 
    OS 32-bit -> a line of databus have a 4 byte width length
    each machine cycle can control 2^32 instruction (32 bit - 4 byte)
    => size of pointer equal 1 frame 
    */
    std::cout << sizeof(ptr) << std::endl; // 8 byte in CPU - compiler 64 bit
}

/*
extra question: 
Why not create a pointer data type and use syntax <Data Type>* <variable_name> ?
Ans:
Because each data type have different size. We don't know many bytes of memory will be allocated. 
*/