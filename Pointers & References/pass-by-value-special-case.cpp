#include <iostream>

struct PassByValue {
    int* ptr;
};

void change(PassByValue p) {
    *p.ptr = 6; 
}

int main() {
    PassByValue passbyValue;
    int p = 5;
    passbyValue.ptr = &p;
    std::cout << *passbyValue.ptr << std::endl;
    /*
    warning: be carefull when use pass by value, pass by value not always safe, although pass by value still pass by value
    In this case, the value of memory location point by pointer is change => unexpected behavior
    */
    change(passbyValue);
    std::cout << *passbyValue.ptr << std::endl;
    return 0;
}