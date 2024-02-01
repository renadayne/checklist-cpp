#include <iostream>
#include <vector>
#include <algorithm>

// Lambda for sort example

int main()
{
    std::vector<int> numbers = { 1, 2, 3, 4, 5 };
    std::cout << "Before:";
    for(auto num : numbers)
    {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Sort using lambda
    std::sort(numbers.begin(), numbers.end(), [](int a, int b) {
        return a > b;
    });

    std::cout << "After: ";
    for(auto num : numbers)
    {
        std::cout << num << " ";
    }
}