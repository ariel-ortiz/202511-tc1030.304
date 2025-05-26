/*
 * Para compilar:
 *       g++ *.cpp -o main && ./main
 */
#include <iostream>
#include "rational.h"

int main() {
    Rational a(123, 246);
    Rational b(-2, -6);
    Rational c(6, 7);
    Rational d(5);
    Rational e(2, 4);
    Rational f;
    // Rational g(4, 0);  // Lanza una excepción
    std::cout << a.to_string() << "\n";
    std::cout << b.to_string() << "\n";
    std::cout << c.to_string() << "\n";
    std::cout << d.to_string() << "\n";
    std::cout << e.to_string() << "\n";
    std::cout << f.to_string() << "\n";
    return 0;
}
