#include <iostream>
#include <typeinfo>

int x = 1;

class mutableStorageClass {
    public:
        int e;
        // var can change even object/instance is a constant
        mutable int y;
    
    mutableStorageClass() {
        x = 2;
        y = 10;
    }
};

void StorageClasses() {
    // usually use on another file
    extern int x; // extern tell us that var is defined elsewhere and did not the same block where it use (i.e. external linkage)
    std::cout << "The value of x is: " << x << std::endl;
    static int i = 5; // scope: file, lifetime: runtime 
    std::cout << "The value of i is: " << i << std::endl;
    i++;
}


int main() {
    // faster than load var from RAM
    // address does not exist in RAM, address in register but can't get it out
    register int c; // default value: garbage value, memory location: register in CPU or RAM
    auto a = 8; // auto declare datatype of var, in this case -> int
    std::cout << typeid(a).name() << std::endl; // result: i -> int
    for(int i = 0; i < 2; i++) {
        StorageClasses();
    }

    const mutableStorageClass t;
    t.y = 100; // t.y still change even when t is a constant because mutable keyword
    return 0;
}