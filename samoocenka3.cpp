#include <iostream>
#include <cmath>

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    std::cout << "Vuvedete koordinatite na purviq vruh (x1 y1): ";
    std::cin >> x1 >> y1;
    std::cout << "Vuvedete koordinatite na vtoriq vruh (x2 y2): ";
    std::cin >> x2 >> y2;
    std::cout << "Vuvedete koordinatite na tretiq vruh (x3 y3): ";
    std::cin >> x3 >> y3;

    double a, b, c;
    a = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    b = std::sqrt(std::pow(x3 - x2, 2) + std::pow(y3 - y2, 2));
    c = std::sqrt(std::pow(x1 - x3, 2) + std::pow(y1 - y3, 2));

    double s = (a + b + c) / 2.0;

    double circumradius = (a * b * c) / (4.0 * std::sqrt(s * (s - a) * (s - b) * (s - c)));

    double inradius = std::sqrt((s - a) * (s - b) * (s - c) / s);

    std::cout << "Radius na opisanata okolo triugulnik okrujnost: " << circumradius << std::endl;
    std::cout << "Radius na vpisana v triugulnika okrujnost: " << inradius << std::endl;

    return 0;
}
