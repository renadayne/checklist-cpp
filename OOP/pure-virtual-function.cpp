#include <iostream>

class pureVirtualFunction {
    int x;

    public:
        virtual void show() = 0;

        // getter function acess x;
        int getPVar() {
            return x;
        }
};

class Child : pureVirtualFunction {
    int y;

    public:
        void show() {
            std::cout << "Child Call" << std::endl; 
        }
};

int main() {
    Child child;
    
    child.show();
    return 0;
}