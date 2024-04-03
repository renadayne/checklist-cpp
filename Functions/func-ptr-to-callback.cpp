#include <iostream>

/*
function pointer use in callback function (callback function use in event-driven programming)
*/


int functionDemo(char c) {
    return (int)c;
}

void printASCII(char c, int (*funct_ptr)(char)) {
    int ascii = funct_ptr(c);
    std::cout << "ASCII of " << c << " is: " << ascii << std::endl;
}



int main() {
    printASCII('d', &functionDemo);
    return 0;
}

