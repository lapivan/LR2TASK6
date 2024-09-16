#include <iostream>
#include <cmath>

int main() {
    double a, c, b, x, k, d, y, p;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter p: " << std::endl;
    std::cin >> p;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    a = log10(x);
    b = x + exp(d);
    y = (a + b) - (pow(c, 2) / k);
    std::cout << "Result: " << y;
    return 0;
}