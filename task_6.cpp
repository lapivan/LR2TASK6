#include <iostream>
#include <cmath>

int main() {
    double a, x, p, b, k, d, c, y;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter p: " << std::endl;
    std::cin >> p;
    a = x+sin(p);
    b = exp(k);
y = 1 + (pow(k, 2)/2 * a * b) - b + d * c;
std::cout << "Result: " << y;
    return 0;
}