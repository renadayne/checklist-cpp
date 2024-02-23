#include <iostream>

class sizeOfClass {
    char a; // 1
    int b; // 4
    static int i; // data segment - don't need class data alignment
    // simply, static belongs to class, different between entire var belongs to object 
    short c; // 2
    double d; // 8 - highest
 
    public:
    /*
    Similar w static in this case, method belongs to class -> not belongs to object
    -> don't need class data alignment
    */
        void methodFunction(int med, std::string str) {
            std::cout << "Method Function Call" << std::endl;
        };
};

/*
In memory:
    char(1 byte) padding(3 byte) int(4 byte) 
    short(2 byte) padding(6 byte)
    double(8 byte)
*/

int main() {
    sizeOfClass size;
    std::cout << sizeof(size) << std::endl;
    return 0;
}