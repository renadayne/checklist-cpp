#include <iostream>
/*
Source: https://khaind.github.io/2020-04-18-SingletonPattern/
*/
namespace SingletonNS {
    namespace {
        // custom data
        static int customData = 10;
    }

    static void doSth() {
        std::cout << "Method do sth" << customData << std::endl;
    }
};

// Usage
SingletonNS::doSth();
/*
Sử dụng namespace chúng ta hoàn toàn có thể có được behavior giống như cài đặt một class Singleton,
và việc viết code cũng đơn giản hơn mặc dù code lúc này có vẻ không có cấu trúc rõ ràng như khi đưa vào class.
*/