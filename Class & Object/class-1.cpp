#include <iostream>

class Acess {
    public:
        virtual void user() const {
            std::cout << "User can access this" << std::endl;
        }
};

class Admin : public Acess {
    public:
        void user() const override {
            std::cout << "Admin can access this" << std::endl;
        }
};

class SystemAdmin: public Admin {
    public:
        void user() const override {
            std::cout << "System Admin area only" << std::endl;
        }
};

int main()
{
    Acess* acessPtr;

    Acess acess;
    Admin admin;
    SystemAdmin systemAdmin;

    acessPtr = &acess;
    acessPtr->user();

    acessPtr = &admin;
    acessPtr->user();

    acessPtr = &systemAdmin;
    acessPtr->user();

    return 0;
}