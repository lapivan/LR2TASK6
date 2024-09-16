#include <iostream>
#include <cmath>

int main() {
    double a, y, x, z, b, k, d, c, t;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter y: " << std::endl;
    std::cin >> y;
    std::cout << "Enter z: " << std::endl;
    std::cin >> z;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    std::cout << "Enter c: " << std::endl;
    std::cin >> c;
    b = sqrt(z);
    a = x - y;
t = (cos(x) + pow(a, 2) / (k - c * d) - b );
std::cout << "Result: " << t;
    return 0;
}