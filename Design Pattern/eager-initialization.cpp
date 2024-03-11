#include <iostream>
#include <string>
/*
Source: https://khaind.github.io/2020-04-18-SingletonPattern/
*/

class Singleton {
    private:
        Singleton() = default; // default cons
        static Singleton _instance; // static private instance
    public:
        Singleton(const Singleton&) = delete;
        static Singleton& getInstance() {
            std::cout << "Get instance in private area" << std::endl;
            return _instance;
        }

        void doSth() {
            std::cout << "Method do sth" << std::endl;
        }
};

Singleton Singleton::_instance; // define static global var

int main() {
    // Cannot create instance directly because cons is private
    Singleton::getInstance().doSth(); // use method doSth directly through _instance

    auto& refVar = Singleton::getInstance(); 
    refVar.doSth(); // use via reference var
    return 0;
}





