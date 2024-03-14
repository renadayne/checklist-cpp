#include <iostream>

class A {
    public:
        A() {
            std::cout << "Constructor A is called" << std::endl;
        }
        ~A() {
            std::cout << "Des A" << std::endl;
        }
};


// if not have virtual, A cons is call twice
class B : virtual public A{
    public:
        B() {
            std::cout << "Constructor B is called" << std::endl;
        }

        ~B() {
            std::cout << "Des B" << std::endl;
        }
};

// if not have virtual, A cons is call twice
class C : virtual public A {
    public:
        C() {
            std::cout << "Constructor C is called" << std::endl;
        }

        ~C() {
            std::cout << "Des C" << std::endl;
        }
};

class D : public B, public C {
    public:
        D() {
            std::cout << "Constructor B is called" << std::endl;
        }

        ~D() {
            std::cout << "Des D" << std::endl;
        }
};

int main() {
    D d; 
    return 0;
}