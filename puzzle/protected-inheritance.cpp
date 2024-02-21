#include <iostream>
// question: In this case, why declare Base pointer point to a memory area Derived -> error

class Base {
    int a = 5;
    public:
        Base() {
            std::cout << "Constructor call" << std::endl;
        };

        virtual void doSth() {};
        virtual ~Base() {
            std::cout << "Virtual Destructor call" << std::endl;
        }
};

class Derived : protected Base {
    public:
        void doSth() {
            std::cout << "Hello in Derived" << std::endl;
        }
};

int main() {
    Base* pt = new Derived; // error
    pt->doSth();
    return 0;
}


