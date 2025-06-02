#pragma once

#include "figure.h"

class Circle : public Figure
{
public:
    Circle(double radius) : _radius(radius) {}
    double area() const override;
    double perimeter() const override;
private:
    double _radius;
};
