#include <iostream>
#include <cmath>

int main() {
    double x;
    std::cout << "Polojitelno realno chislo: ";
    std::cin >> x;

    if (x < 0) {
        std::cout << "Polojitelno chislo." << std::endl;
        return 1;
    }

    double fractionalPart = x - std::floor(x);

    int firstDigit = static_cast<int>(fractionalPart * 10);

    int b = firstDigit;

    std::cout << "Purvata cifra na drobnata chast na " << x << " e: " << b << std::endl;

    return 0;
}
