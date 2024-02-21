#include <iostream>

class Base {
    public:
        virtual void doSth() {
            std::cout << "doSth from class Base";
        };
        virtual ~Base() {
            std::cout << "Virtual Destructor Call" << std::endl;
        };
};

class Derived : public Base {
    public:
        void doSth() override {
            std::cout << "doSth from class Derived" << std::endl;
        };
        void doNothing() {};
};

int main()
{
    Base* ptr = new Derived;
    ptr->doSth(); 
    // ptr->doNothing(); - Error because Base class has no member doNothing()
}