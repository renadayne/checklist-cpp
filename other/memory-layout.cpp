#include <iostream>

const int globalthis = 5; // text segment
/* int *globalptr = &globalthis; // globathis become data segment - global ptr  */
int main() {
    std::cout << globalthis << std::endl;
    return 0;
}