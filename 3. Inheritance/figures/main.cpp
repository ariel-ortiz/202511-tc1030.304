#include <iostream>
#include "circle.h"
#include "rectangle.h"
#include "square.h"

int main()
{
    Circle c(2.0);
    Rectangle r(4.0, 6.0);
    Square s(5.5);
    std::cout << c << "\n";
    std::cout << r << "\n";
    std::cout << s << "\n";
    s.make_pants();
    r = s;
    std::cout << r << "\n";
    return 0;
}
