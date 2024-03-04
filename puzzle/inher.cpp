#include <iostream>

class A {
    public:
        void C() {
            std::cout << "Hello A" << std::endl;
        }
};

class B {
    public:
        void C() {
            std::cout << "Hello B" << std::endl;
        }
};

class C : public A, public B {
    
};

int main() {
    C c;
    c.C(); // error: invalid, can't recognize function C in B or A
    c.B::C(); // oke
    return 0;
}

