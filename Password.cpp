#include <sstream>
#include <iostream>
#include <iomanip>
#include <cmath>

int simplifyDigit(int digit) {
    while (digit >= 10) {
        digit = digit % 10 + digit / 10;
    }
    return digit;
}

std::string generatePassword(double number, const std::string& name) {
    try {
        std::ostringstream oss;
        oss << std::scientific << std::setprecision(10) << number;
        std::string scientificNotation = oss.str();
        
        size_t posE = scientificNotation.find('e');
        std::string mantissa = scientificNotation.substr(0, posE);
        int exponent = std::stoi(scientificNotation.substr(posE + 1));

        exponent = simplifyDigit(exponent);

        std::string s1;
        for (char digit : mantissa) {
            if (isdigit(digit) && digit != '.') {
                int charCode = digit - '0';
                s1 += std::to_string(charCode);
            } else {
                s1 += digit;
            }
        }
        s1 = s1.substr(0, 3);

        std::string s2;
        for (size_t i = 0; i < name.length(); ++i) {
            if ((static_cast<size_t>(i + 1) % 2) == static_cast<size_t>(exponent % 2)) {
    s2 += name[i];
}
        }

        std::string password = s1 + "@" + s2;
        return password;
    } catch (const std::invalid_argument& e) {
        return "Invalid input";
    }
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; ++t) {
        double number;
        std::string name;
        std::cin >> number >> name;

        std::string password = generatePassword(number, name);
        std::cout << password << std::endl;
    }

    return 0;
}