#include <iostream>
#include <cstring>

/*
The meaning of Encapsulation, is to make sure that "sensitive" data is hidden from users.
To achieve this, you must declare class variables/attributes as private (cannot be accessed from outside the class).
If you want others to read or modify the value of a private member, you can provide public get and set methods.
*/

class Student {
    std::string name;
    int age;

    public:
        // setter
        void setStudentName(std::string name) {
            this->name = name;
        }

        // getter
        std::string getStudentName() {
            return name;
        } 
};

int main() {
    Student student;
    student.setStudentName("Rena");
    std::cout << student.getStudentName() << std::endl;
    return 0;
}