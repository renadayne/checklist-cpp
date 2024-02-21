#include <iostream>
// why x value not equal 2 or 1 ?
int x = 1;
namespace {
    int x = 5;
 
    struct C {
        int x = 2;
 
        void f() {
            extern int x; 
            std::cout << x << '\n';
        }
    };
}




int main() {
    C c;
    c.f(); // x = 5
    
    return 0;
}