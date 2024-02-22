#include <iostream>
#include <string>

class Resource {
private:
    std::string data;
public:
    Resource(const std::string& str) : data(str) {
        std::cout << "Resource constructed with data: " << data << " at address: " << (&data) << std::endl;
    }

    // Copy constructor
    Resource(const Resource& other) : data(other.data) {
        std::cout << "Copy constructor invoked with data: " << data << " at address: " << static_cast<void*>(&data) << std::endl;
    }

    // Move constructor
    Resource(Resource&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor invoked with data: " << data << " at address: " << (&data) << std::endl;
    }

    ~Resource() {
        std::cout << "Resource destroyed with data: " << data << " at address: " << (&data) << std::endl;
    }
};

int main() {
    // Creating a resource object
    Resource original("Hello");

    std::cout << "--- Copy constructor ---" << std::endl;
    // Using copy constructor
    Resource copy(original);

    std::cout << "--- Move constructor ---" << std::endl;
    // Using move constructor
    Resource moved(std::move(original));

    return 0;
}
