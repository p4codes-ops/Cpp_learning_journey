#include <iostream>
#include <string>

int main() {
    // 1. Arithmetic & Assignment Operators
    int student = 15;
    student += 1; // 16
    student -= 2; // 14
    student *= 4; // 56
    student /= 5; // 11
    int remainder = student % 3; // Modulo operator

    std::cout << "--- Arithmetic Operators ---" << std::endl;
    std::cout << "Student count after operations: " << student << std::endl;
    std::cout << "Remainder (11 % 3): " << remainder << "\n\n";

    // 2. Type Conversion (Implicit & Explicit)
    std::cout << "--- Type Conversion ---" << std::endl;
    int x = (int) 3.14; // Explicit casting (Truncates decimal)
    char c = 100;       // Implicit casting to ASCII character 'd'
    
    int correct = 8;
    int questions = 10;
    double score = correct / (double) questions * 100;

    std::cout << "Value of x (cast to int): " << x << std::endl;
    std::cout << "Char from ASCII 100: " << c << std::endl;
    std::cout << "Score percentage: " << score << "%\n\n";

    // 3. User Inputs
    std::cout << "--- User Input ---" << std::endl;
    std::string name;
    int age;

    std::cout << "What's your name?: ";
    std::cin >> name;
    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Hello " << name << "\n";
    std::cout << "You are " << age << " years old" << std::endl;

    return 0;
}
