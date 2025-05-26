#pragma once

#include <iostream>

class Rational {

public:

    Rational(int numerator=0, int denominator=1);
    std::string to_string() const;

private:

    int _numerator;
    int _denominator;
};

std::ostream& operator<<(std::ostream& os, const Rational& r);
