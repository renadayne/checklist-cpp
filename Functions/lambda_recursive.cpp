#include <iostream>
#include <functional>
// Recursive lambda example

int factorial(int n) {
    // lambda fuction declared with std::function assign to recurse => allows lamma to call itself 
    std::function<int(int)> recurse = [&](int x)
    {
        return (x == 0) ? 1 : x * recurse(x - 1); 
    };
    return recurse(n);
}

int main()
{
    std::cout << factorial(5) << std::endl;
}

