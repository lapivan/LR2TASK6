#include <iostream>
#include <cmath>

int main() {
    double a, z, b, x, k, d, y, c;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    a = log(x) - k;
    b = sqrt(z);
    y = pow(d, 2) + (pow(c, 2) / (0,75 * a)) + b;
    std::cout << "Result: " << y;
    return 0;
}