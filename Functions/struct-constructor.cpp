#include <iostream>

struct doSth {
    protected:
        void doNothing() {};
    public:
    /* struct is also have constructor & destructor */
        doSth() {
            std::cout << "Constructor doSth" << std::endl;
        };

        ~doSth() {
            std::cout << "Destructor doSth" << std::endl;
        };
};

int main() {
    doSth dodo;
    return 0;
}