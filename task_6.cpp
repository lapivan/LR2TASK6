#include <iostream>
#include <cmath>

int main() {
    double a, z, b, x, k, d, y, p, c;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z;
    std::cout << "Enter p: " << std::endl;
    std::cin >> p;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    a = sin(x) - z;
    b = fabs(p-x);
    y = pow((a + b), 2) - k / (c * d);
    std::cout << "Result: " << y;
    return 0;
}