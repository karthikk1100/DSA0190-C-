#include <iostream>
#include <algorithm>

class StringConverter {
public:
    static std::string toUpperCase(std::string str) {
        std::transform(str.begin(), str.end(), str.begin(), ::toupper);
        return str;
    }

    static std::string toLowerCase(std::string str) {
        std::transform(str.begin(), str.end(), str.begin(), ::tolower);
        return str;
    }
};

int main() {
    std::string input;
    char choice;

    std::cout << "Enter a string: ";
    std::getline(std::cin, input);

    std::cout << "Convert to (U)ppercase or (L)owercase? ";
    std::cin >> choice;

    if (choice == 'U' || choice == 'u')
        std::cout << StringConverter::toUpperCase(input) << std::endl;
    else if (choice == 'L' || choice == 'l')
        std::cout << StringConverter::toLowerCase(input) << std::endl;

    return 0;
}
