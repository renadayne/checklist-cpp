#include <iostream>
#include <string>

class Base {
    int data;

    public:
        void baseMethod() {
            std::cout << "This is base method" << std::endl;
        };
};

class DerivedPublic : public Base {
    // Nothing special
};

class DerivedProtected : protected Base {
    public:
        void getData() {
            baseMethod();
        }
};

class DerivedPrivate : private Base {
    public:
        void getter() {
            baseMethod();
        }
};

class DerviedDerivedProtected : public DerivedProtected {
    public:
       getter();
};

class DerivedDerivedPrivate : public DerivedPrivate {
    public:
        baseMethod();
};

int main() {
    DerviedDerivedProtected der_p;
    der_p.getter();
    // DerivedDerivedPrivate der;
    // der.baseMethod(); // error - inheritance private inheritance class
    return 0;
}