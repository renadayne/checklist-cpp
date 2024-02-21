#include <iostream>

class Rectangle {
    private:
        int height, width;
    
    public:

        int getArea(int height, int width)
        {
            return height * width;
        }

};

int main() {
    Rectangle rectangle;
    std::cout << rectangle.getArea(3, 4);
    return 0;
}