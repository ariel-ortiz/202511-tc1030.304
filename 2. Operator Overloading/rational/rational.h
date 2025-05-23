#pragma once

#include <iostream>

class Rational {

public:

    Rational(int numerator, int denominator=1);
    std::string to_string();

private:

    int _numerator;
    int _denominator;
};
