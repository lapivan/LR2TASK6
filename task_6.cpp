#include <iostream>
#include <cmath>

int main() {
    double a, x, b, d, s;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    b = x + d;
    a = d * x / b;
s = (pow(a, 2) + b * cos(x)) / (pow(d, 3) + (a + d -b));
std::cout << "Result: " << s;
    return 0;
}