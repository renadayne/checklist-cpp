#include <iostream>
// question: why can't see constructor of A in output console

class A {
    public:
        A() {
            std::cout << "Constructor call" << std::endl;
        }

        ~A() {
            std::cout << "Destructor call" << std::endl;
        }
};

class B {
    static A a;
    public:
        B() {
            std::cout << "Constructor call of B" << std::endl;
        }

        ~B() {
            std::cout << "Destructor call of B" << std::endl;
        }

    static A& doSth() {
        return a;
    }
};

// g++ -E <filename>.cpp -o <filename>.i -> file.i
// g++ <filename>.cpp -S <filename>.s -> file assembly
// explicit declare
A B::a;

int main() {
    A object2;
    object2 = B::doSth();
    
    return 0;
}