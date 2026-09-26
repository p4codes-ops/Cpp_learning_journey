#include <iostream>
#include <string>

// 1. Namespace concept
namespace First {
    int x = 1;
}

// 2. Typedef & Type Aliases concept
typedef std::string text_t;
using number_t = int;

int main() {
    // 3. Hello World & Basic Output
    std::cout << "Hello World!" << std::endl;

    // 4. Variables & Data Types
    number_t age = 21;
    double price = 99.99;
    char grade = 'A';
    bool isStudent = true;
    text_t name = "Coding Learner";

    // 5. Const keyword
    const double PI = 3.14159;

    // Output all values
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "PI Value: " << PI << "\n";
    std::cout << "Namespace First X: " << First::x << "\n";

    return 0;
}
