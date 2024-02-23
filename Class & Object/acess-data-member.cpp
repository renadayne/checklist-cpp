#include <iostream>

class exampleClass {
    // default acess specifier private
    // members cannot be accessed (or viewed) from outside the class
    int* privateVar; // Attributes

    public:
    // members are accessible from object outside class
        int publicVar;
        // Method
        void publicMethod() {
            std::cout << "Public method call" << std::endl;
        }


    protected:
    // members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
        char* protectVar;
        void protectMethod() {
            std::cout << "Protect method call" << std::endl;
        }

};

class inheritanceExample : exampleClass {
    public:
        void useProtectMethod() {
            protectMethod();
        }
};

int main() {
    exampleClass ex;
    ex.publicMethod();

    inheritanceExample iEx;
    iEx.useProtectMethod();
    return 0;
}