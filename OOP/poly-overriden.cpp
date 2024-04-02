#include <iostream>

class Shape { // if write class Shape final -> it's will got an error because Rec and Cir can't Derived 
    public:
        virtual void Draw() = 0;
};

class Rectangle final : public Shape {
    public:
        void Draw() override {
            std::cout << "Rectangle draw" << std::endl; 
        }
};

class Circle : public Shape {
    public:
        void Draw() override {
            std::cout << "Circle draw" << std::endl;
        }
};


int main() {
    return 0;
}