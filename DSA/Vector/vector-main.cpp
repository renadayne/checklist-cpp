#include <iostream>
#include "vector-custom.hpp"

int main() {
    Vector <int> customVector(2);
    std::cout << customVector.vsize() << std::endl;

    customVector.push_back(6);
    customVector.push_back(5);
    customVector.push_back(4);
    customVector.push_back(10);
    customVector.push_back(12);
    std::cout << customVector[0] << std::endl;
    customVector.print();

    customVector.insert(1, 3);
    customVector.print();

    customVector.erase(4);
    customVector.print();

    Vector <int> customVector2(15);
    customVector2 = customVector;
    customVector2.print();

    customVector.clear();
    customVector.print();
    return 0;
}