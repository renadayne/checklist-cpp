#include <iostream>

class SmartPhone {
    public:
        virtual void openThePhone(const std::string password) const = 0;
        virtual ~SmartPhone() {};
};

class iPhone : public SmartPhone {
    public: 
        void openThePhone(const std::string password) const override {
            if(password == "1111") std::cout << "iPhone Home Screen" << std::endl;
            else std::cout << "Wrong Password! Cannot open iPhone!" << std::endl;
        }
};

class androidPhone : public SmartPhone {
    public:
        void openThePhone(const std::string password) const override {
            if(password == "3,1415926") std::cout << "Android Phone Home Screen";
            else std::cout << "Wrong Password! Cannot open Android Phone!" << std::endl;
        }
};

int main() {
    SmartPhone* myPhone = new iPhone;
    myPhone->openThePhone("1111");
    myPhone->openThePhone("ehe");
    delete myPhone;

    myPhone = new androidPhone;
    myPhone->openThePhone("WrongPass");
    myPhone->openThePhone("3,1415926");
    delete myPhone;
    return 0;
}