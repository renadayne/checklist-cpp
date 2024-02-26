/*
Source: cppdeveloper.com
*/

#include <iostream>

class Base
{
public:
    /* 
    Static dispatch -> compile time
    void method1(); 
    void method2(int x);
    */
    virtual void method1(); // dynamic dispatch -> runtime
    virtual void method2(int x); // dynamic dispatch -> runtime
};
 
void Base::method1()
{
    std::cout << "Base::method1()" << std::endl;
}
 
void Base::method2(int x)
{
    std::cout << "Base::method2(): x = " << x << std::endl;
}


class Derived : public Base
{
public:
    void method1();
};

void Derived::method1()
{
    std::cout << "Derived::method1()" << std::endl;
}

int main() {
    Base *baseObj = new Derived();
    baseObj->method1(); // Derived::method1()
    return 0;
}



