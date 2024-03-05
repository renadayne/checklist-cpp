#include <iostream>
#include <string>
int main()
{
    std::string a = "Toi la tre trau";
    int * x;
    std::cout << &a[0] << std::endl; // "Toi la tre trau" - in string u know first character address => string
    x =  (int*)&a[0]; // cast string to int (a number maybe random or not)
    x++;
    std::cout << std::to_string (*x) << std::endl; // cast int to string (a number now is the same but have string type)
    return 0;
}