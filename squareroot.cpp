#include <iostream>
#include <cmath>  // For sqrt() function

int main() {
    double number, squareRoot;

    std::cout << "Enter a number: ";
    std::cin >> number;

    if (number >= 0) {
        squareRoot = sqrt(number);
        std::cout << "Square root of " << number << " is " << squareRoot << std::endl;
    } else {
        std::cout << "Error: Square root of a negative number is not defined in the real number system." << std::endl;
    }

    return 0;
}
