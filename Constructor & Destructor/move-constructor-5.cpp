#include <iostream>
#include <string>

class MyString {
private:
    std::string data;
public:
    // Default constructor
    MyString() : data("") {}

    // Move constructor
    // MyString(MyString&& other) noexcept : data(std::move(other.data));
    MyString(MyString&& other) noexcept {
    // Move data from other.data to current object data
    data = std::move(other.data);
}

    void setData(const std::string newData) {
        data = newData;
    }

    void display() const {
        std::cout << "Data: " << data << std::endl;
    }
};

int main() {
    // Create an object
    MyString str1;

    // Set data for str1
    str1.setData("Hello");
    std::cout << &str1 << std::endl;
    // Create another object using move constructor
    MyString str2 = std::move(str1);
    std::cout << &str2 << std::endl;
    // Display data of str2
    str2.display();

    // Display data of str1 (should be empty as it was moved)
    str1.display();

    return 0;
}
