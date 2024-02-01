#include <iostream>


class Rectangle {
    private:
        int width;
        int height;
    
    public:
    // Constructor
        Rectangle(int width, int height)
        {
            this->width = width;
            this->height = height;
            std::cout << "Rectangle constructor" << std::endl;
        }
    // Destructor
        ~Rectangle()
        {
            std::cout << "Rectangle destructor" << std::endl;
        }

        int area() {
            return width * height;
        }
};

int main() {
    Rectangle rectangle(3, 4);
    std::cout << rectangle.area() << std::endl;
    return 0;
}
