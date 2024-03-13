#include <iostream>

class RobotInterface {
    private:
        int height;
    public:
    // Interface only have virtual method
        virtual void greet() = 0;
        virtual void move() = 0;
};
