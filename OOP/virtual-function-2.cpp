#include <iostream>

class Base {
    public: 
        virtual void print() { std::cout << "print base class" << std::endl; }

        void show() {std::cout << "show base class" << std::endl; }
};

class Derived : public Base {
    public:
        void print() { std::cout << "print derived class" << std::endl; }

        void show() { std::cout << "show derived class"; }
};

int main() {
    Base *bptr;
    Derived d;
    bptr = &d;

    // Virtual function, binded at runtime
    bptr->print();

    // Non-virual function, binded at compile time
    bptr->show();

    return 0;
}