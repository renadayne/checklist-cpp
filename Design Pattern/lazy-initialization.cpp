#include <iostream>
/*
Source: https://khaind.github.io/2020-04-18-SingletonPattern/
*/
class Singleton {
    private:
        Singleton() = default; // Private default cons
    public:
        Singleton(const Singleton&) = delete;
        static Singleton& getInstance() {
            std::cout << "get Instance from private area" << std::endl;
            // Compare w eager, lazy is define static instance var in method getInstance 
            static Singleton _instance;
            return _instance;
        }

        void doSth() {
            std::cout << "Method do sth" << std::endl;
        }
};
// Don't need to create static global instance

int main() {
    // instance only create when getInstance call
    auto& refVar = Singleton::getInstance();
    refVar.doSth();
}