#include <iostream>

class A {
    int index;
    public:
        A(int index) {
            std::cout << "A::A" << index << "() Cons" << std::endl;
            this->index = index;
        }

        ~A() {
            std::cout << "A::A" << index << "() Cons" << std::endl;
        }
};
A a(1);
int main() {
    A a(2);
    A b(3);
    return 0;
}

/*
A::A1() Cons
A::A2() Cons
A::A3() Cons
A::A3() Cons
A::A2() Cons
A::A1() Cons
*/