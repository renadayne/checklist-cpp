#include <iostream>

class Base {
    public:
        Base() {
            std::cout << "Base is here" << std::endl;
        }

        // tao ra vtable khi co virtual keyword -> derived ke thua lop cha cung co 
        // vtable cua base class chua con tro tro den doSth cua chinh no Base::doSth()
        virtual void doSth() {
            std::cout << "do Sth Base" << std::endl;
        }
};

class Derived : public Base {
    public:
        Derived() {
            std::cout << "Derived is here" << std::endl;
        }
        
        // co vtable co con tro tro den Derived::doSth()
        void doSth() override {
            std::cout << "do Sth Derived" << std::endl;
        }
};

int main() {
    Base* base = new Derived(); // tao ra 1 vpointer cua object base -> dang tro den vtable cua derived
    base->doSth();
    // Derived* derived = new Derived();
    return 0;
}