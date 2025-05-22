/*
 * Para compilar:
 *       g++ *.cpp -o main
 */
#include <iostream>
#include "rational.h"

int main() {
    Rational a(1, 2);
    std::cout << a.to_string() << "\n";
    return 0;
}
