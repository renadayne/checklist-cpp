#include <iostream>
#include <stdexcept>

int main() {
    double n, d, result;
    std::cin >> n >> d;
    try {
        // catch the error
        if(d == 0) {
            throw std::runtime_error(
                "Division by zero is abandon!");
        }

        // calculate in case no error found
        result = n / d;
        std::cout << "The result of division: " << result << std::endl;
    }

    catch (const std::exception& e) {
        // print the exception
        std::cout << "Exception: " << e.what() << std::endl;
    }
    return 0;
}