#include <iostream>

// Overloading example 


class InputData {
    public:
        void input(int i) {
            std::cout << "input int: " << i << std::endl;
        }

        void input(double d) {
            std::cout << "input double: " << d << std::endl;
        }

        void input(char c) {
            std::cout << "input char: " << c << std::endl;
        }
};

int main()
{
    InputData inputdata;

    // input int
    inputdata.input(1);

    // input double
    inputdata.input(1.5);
    
    // input char
    inputdata.input('a');
}