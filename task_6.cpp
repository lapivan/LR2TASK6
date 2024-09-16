#include <iostream>
#include <cmath>

int main() {
    double n, x, p, b, k, d, c, q;
    std::cout << "Enter x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter p: " << std::endl;
    std::cin >> p;
    std::cout << "Enter n: " << std::endl;
    std::cin >> n;
    std::cout << "Enter k: " << std::endl;
    std::cin >> k;
    std::cout << "Enter d: " << std::endl;
    std::cin >> d;
    b = cos(x);
    c = p - n;
q = (pow(b, 2)/ (k * d) + b * pow(c, 3));
std::cout << "Result: " << q;
    return 0;
}