#include <iostream>
#include <set>

int main() {
    int a;
    std::cout << "Vuvedete chetiricifreno polojitelno chislo: ";
    std::cin >> a;

    if (a >= 1000 && a <= 9999) {
        int digits[4];
        std::set<int> uniqueDigits;

        for (int i = 0; i < 4; ++i) {
            digits[i] = a % 10;
            a /= 10;
            if (uniqueDigits.count(digits[i]) > 0) {
                std::cout << "0" << std::endl;
                return 0;
            }
            uniqueDigits.insert(digits[i]);
        }

        std::cout << "1" << std::endl;
    } else {
        std::cout << "0" << std::endl;
    }

    return 0;
}
