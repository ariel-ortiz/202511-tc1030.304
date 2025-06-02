#include <cmath>
#include "circle.h"

double Circle::area() const
{
    return M_PI * _radius * _radius;
}

double Circle::perimeter() const
{
    return _radius * 2 * M_PI;
}
