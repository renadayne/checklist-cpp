#include <iostream>

using namespace std;
    class Test1 {
        const int x = 188;
    public:
        Test1() : x(100) {} // x = 100 is error so we need to declared like this
        //Test1() { cout << "Test1::Test1()" << endl; }
        virtual void print() {
            cout << x << endl;
        };
    };
    class Test2 : public Test1 {
        public:
    };

int main(){
    Test1 a;
    a.print();
    return 0;
}