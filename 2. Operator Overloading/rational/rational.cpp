#include <iostream>
#include "rational.h"

int gcd(int a, int b)
{
    while (b != 0) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

Rational::Rational(int numerator, int denominator)
{
    int sign = 1;
    if (numerator * denominator < 0) {
        sign = -1;
    }
    numerator = abs(numerator);
    denominator = abs(denominator);
    int factor = gcd(numerator, denominator);
    _numerator = (numerator / factor) * sign;
    _denominator = denominator / factor;
}

std::string Rational::to_string()
{
    if (_denominator == 1) {
        return std::to_string(_numerator);
    }
    return std::to_string(_numerator)
        + "/"
        + std::to_string(_denominator);
}
