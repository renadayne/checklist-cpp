#include <iostream>
#include <vector>

class DataWrapper {
    std::vector<int> data;

    public:
        DataWrapper(const std::vector<int>& input) : data(input) {}

        // Copy Cons
        DataWrapper(const DataWrapper& other) : data(other.data) {}

        void addNumber(int num) {
            data.push_back(num);
        }

        void printData() const {
            for(int num : data) {
                std::cout << num << " ";
            }
            std::cout << std::endl;
        }
};

void processData(DataWrapper data) {
    data.addNumber(100);
    std::cout << "Data in processData: ";
    data.printData();
}

int main() {
    std::vector<int> initialData = {1, 2, 3, 4, 5};
    DataWrapper originalData(initialData);

    processData(originalData);

    std::cout << "Data after process: ";
    originalData.printData();
    
    return 0;
}

/*
Data in processData: 1 2 3 4 5 100
Data after process: 1 2 3 4 5
*/
