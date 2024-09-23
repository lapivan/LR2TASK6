#include <iostream>
#include <cmath>

int main() {
    double a, c, b, x, k, d, y, p, h;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter p: " << std::endl;
    std::cin >> p;
    std::cout << "Enter h: " << std::endl;
    std::cin >> h;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    a = x - p;
    b = log(h);
    pow(0,78 * b + (pow(a, 3) / (k * c * d)));
    std::cout << "Result: " << y;
    return 0;
}