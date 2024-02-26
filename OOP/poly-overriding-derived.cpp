#include <iostream>
#include <cstring>


class Vehicle {
    protected:
        std::string VehicleName;
    
    public: 
        Vehicle(std::string name) { VehicleName = name; }
        void CarHonk(void) { std::cout << VehicleName << " brbr !!" << std::endl; }
};

class BMW : public Vehicle {
    public:
        BMW(std::string name) : Vehicle(name) {}
        void CarHonk(void) { std::cout << VehicleName << " gru gru" << std::endl; }
};

class Honda : public Vehicle {
    public:
        Honda(std::string name) : Vehicle(name) {}
        void CarHonk(void) { std::cout << VehicleName << " poot poor" << std::endl; }
};

int main() {
    BMW* bmw;
    Honda* honda;

    bmw = new BMW("BMW xyzt");
    honda = new Honda("Future");

    bmw->CarHonk();
    static_cast<Vehicle *>(bmw)->CarHonk();
    honda->CarHonk();
    static_cast<Vehicle *>(honda)->CarHonk();

    return 0;
}