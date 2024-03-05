#include <iostream>
using namespace std;

int main() {
    int a;
    char *x;
    x = (char *) &a;
    a = 512;
    cout << (short) x[0] << endl;
    cout << (short) x[1] << endl;
    cout << (short) x[2] << endl;
    cout << (short) x[3] << endl;

    return 0;
}