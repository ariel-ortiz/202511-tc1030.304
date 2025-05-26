/*
 * Para compilar:
 *       g++ *.cpp -o main && ./main
 */
#include <iostream>
#include "rational.h"

int main() {
    // Rational a(123, 246);
    // Rational b(-2, -6);
    // Rational c(6, 7);
    // Rational d(5);
    // Rational e(2, 4);
    // Rational f;
    // // Rational g(4, 0);  // Lanza una excepción
    // std::cout << a << "\n";
    // std::cout << b << "\n";
    // std::cout << c << "\n";
    // std::cout << d << "\n";
    // std::cout << e << "\n";
    // std::cout << f << "\n";
    // Rational a(1, 3), b(2, 3);
    // Rational c = a + b;
    // std::cout << a << " + " << b << " = " << c << "\n";
    Rational a(1, -2);
    Rational b = -a;
    std::cout << a << "\n";
    std::cout << b << "\n";
    return 0;
}
