#include <iostream>

class SuperClass {
    public:
        void doSth() {
            std::cout << "SuperClass" << std::endl;
        };
};

class A : virtual public SuperClass {
    public:
        void doSth() {
            std::cout << "A Class" << std::endl;
        }
};

class B : virtual public SuperClass {
    public:
        void doSth() {
            std::cout << "B Class" << std::endl;
        }
};

class C : public A, public B {
};

int main() {
    C c;
    // c.doSth(); // Ambiguous - confusing call to doSth() from A or B? 
    c.A::doSth(); // Explicit specify method by qualifying function call
    c.B::doSth();
    return 0;
}