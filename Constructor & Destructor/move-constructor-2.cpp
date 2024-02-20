/*
Author: ThanhPGT 
The desired program aims to discuss the differences between the copy constructor and the move constructor.
*/
#include <iostream>
using namespace std;
class Array
{
private:
    int* pt;
    int a;
public:
    Array(int n,int va)
    {
        cout<<"Hello constructor"<<endl;
        pt = new int;
        *pt =n;
        a= va;
        cout << a<< endl;
    }
    Array(Array &value){
        cout<< "Copy constructor!!"<<endl;
        this->pt = value.pt;
        value.pt = nullptr;
    }
    Array(Array&& value)
    {
        cout<< "Move constructor"<<endl;
        this->a=value.a;
        this->pt = value.pt;
        value.pt = nullptr;
       
    }
    void getter1(){
        cout <<pt<<endl;
    }
    void getter2(){
        cout <<a<<endl;
    }
    void cao(){
        cout<< "ok"<<endl;
    }
};
int main()
{
    Array b(6,8);
    Array a(b);
    // Array a(move(b));
    //Array c(b);
    //Array c(b);
    //Array obj1(static_cast<Array&&>(b));
    // b.getter1();
    // c.getter1();
    a.getter2();
    b.getter2();
    return 0;
}