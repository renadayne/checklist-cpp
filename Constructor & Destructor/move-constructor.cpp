#include <iostream>

class A {
    int *p;
    public:
        A() {
            std::cout << "Constructor Call" << std::endl;
        }

        A(int) {
            std::cout << "Parameterized Constructor" << std::endl;
        }

        A(A&){
            std::cout << "Copy cons" << std::endl;
        }

        A(A&&){ // && - reference to Rvalue
            std::cout << "Move cons" << std::endl;
        }

        ~A() {
            std::cout << "Destructor Call" << std::endl;
        }

};
int main() {
    A a;
    A b(a); // copy cons
    A c = std::move(a); // move cons
    A d = static_cast<A&&>(a); // move cons - not rcm to use 
}