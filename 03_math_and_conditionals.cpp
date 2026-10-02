#include <iostream>
#include <cmath>

// 1. Math Functions Practice
void mathFunctionsDemo() {
    std::cout << "=== 1. Math Functions Demo ===\n";
    double x = 3.99;
    double y = 4;
    double z;

    z = std::max(x, y);
    std::cout << "max(3.99, 4): " << z << "\n";

    z = std::min(x, y);
    std::cout << "min(3.99, 4): " << z << "\n";

    z = pow(2, 3);
    std::cout << "pow(2, 3): " << z << "\n";

    z = pow(19, 2);
    std::cout << "pow(19, 2): " << z << "\n";

    z = sqrt(11);
    std::cout << "sqrt(11): " << z << "\n";

    z = abs(-12);
    std::cout << "abs(-12): " << z << "\n";

    z = abs(14);
    std::cout << "abs(14): " << z << "\n";

    z = round(x);
    std::cout << "round(3.99): " << z << "\n";

    z = ceil(x);
    std::cout << "ceil(3.99): " << z << "\n";

    z = floor(x);
    std::cout << "floor(3.99): " << z << "\n\n";
}

// 2. Right Triangle Hypotenuse Calculator
void hypotenuseCalculator() {
    std::cout << "=== 2. Hypotenuse Calculator ===\n";
    double a, b, c;

    std::cout << "Enter side a: ";
    std::cin >> a;

    std::cout << "Enter side b: ";
    std::cin >> b;

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "Side c (Hypotenuse): " << c << "\n\n";
}

// 3. Age Verification System
void ageVerification() {
    std::cout << "=== 3. Age Verification ===\n";
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age < 0) {
        std::cout << "You're not born yet!\n\n";
    } else if (age >= 100) {
        std::cout << "You're too old to enter!\n\n";
    } else if (age >= 18) {
        std::cout << "Welcome to site!\n\n";
    } else {
        std::cout << "You're not old enough to enter!\n\n";
    }
}

// 4. Month Printer (Switch Case)
void monthPrinter() {
    std::cout << "=== 4. Month Printer ===\n";
    int month;

    std::cout << "Enter month (1-12): ";
    std::cin >> month;

    switch (month) {
        case 1:  std::cout << "It is January\n"; break;
        case 2:  std::cout << "It is February\n"; break;
        case 3:  std::cout << "It is March\n"; break;
        case 4:  std::cout << "It is April\n"; break;
        case 5:  std::cout << "It is May\n"; break;
        case 6:  std::cout << "It is June\n"; break;
        case 7:  std::cout << "It is July\n"; break;
        case 8:  std::cout << "It is August\n"; break;
        case 9:  std::cout << "It is September\n"; break;
        case 10: std::cout << "It is October\n"; break;
        case 11: std::cout << "It is November\n"; break;
        case 12: std::cout << "It is December\n"; break;
        default: std::cout << "Invalid month number!\n"; break;
    }
    std::cout << "\n";
}

int main() {
    // Calling each practice module
    mathFunctionsDemo();
    hypotenuseCalculator();
    ageVerification();
    monthPrinter();

    return 0;
}
