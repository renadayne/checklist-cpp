#include <iostream>

class A {
    int a; // 8 byte - biggest framesize
};

class B {
    char b[4]; // 3 byte
};

class C {
    int c; // 4 byte
};

class E {
    char e[2];
};

class ABCDE : public A, public B, public C, public E {
};

int main() {
    C c;
    A a;
    ABCDE abcde;
    std::cout << sizeof(a) << std::endl;
    std::cout << sizeof(abcde) << std::endl; // 24 byte if double a, 16 byte if int a
    // => size & padding like a normal class 
    return 0;
}


