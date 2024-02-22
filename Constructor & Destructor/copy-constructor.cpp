#include <iostream>

class Constructor {
    public:
        Constructor() {
            std::cout << "Constructor call" << std::endl;
        }

        Constructor(Constructor &obj) {
            std::cout << " Copy constructor call" << std::endl;
        }

        Constructor(Constructor &&obj) {
            std:: ""
        }

};

int main() {
    Constructor obj1;
    Constructor obj2 = obj1;
    return 0;
}