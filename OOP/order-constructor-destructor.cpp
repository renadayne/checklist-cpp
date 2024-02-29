#include <iostream>

class Base {
    public:
        Base() {
            std::cout << "Constructor of Base" << std::endl;
        }

        ~Base() {
            std::cout << "Destructor of Base" << std::endl;
        }
};

class secondBase {
    public:
        secondBase() {
            std::cout << "Constructor of Second Base" << std::endl;
        }

        ~secondBase() {
            std::cout << "Destructor of Second Base" << std::endl;
        }
};

class Inheritance : public Base { 
    public:
        Inheritance() {
            std::cout << "Constructor of Inheritance class" << std::endl;
        }

        ~Inheritance() {
            std::cout << "Destructor of Inheritance Class" << std::endl;
        }
};

// Multiple Inheritance 
class secondInheritance : public Base, public secondBase {
    public:
        secondInheritance() {
            std::cout << "Multiple Inheritance Constructor" << std::endl;
        }

        ~secondInheritance() {
            std::cout << "Multiple Inheritance Destructor" << std::endl;
        }
};


int main() {
    secondInheritance sec;
    return 0;
}