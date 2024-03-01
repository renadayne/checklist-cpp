#include <iostream>

int main() {
    
    const int* ptrc; // pointer to const
    int a = 5;
    int* const cptr = &a; // const pointer - must initialized when definition
    const int b = 6;
    // can't use normal pointer point to a const var - because normal pointer can modify value of var
    int* normalPtr = &b; // -> error

    /*
    Const pointer Target: protect a memory location
    ex: in embedded, some register not allowed to touch 
    Pointer to const Target: cannot change value of var
    */
   
    return 0;
}