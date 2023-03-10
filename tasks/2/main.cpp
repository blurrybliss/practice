#include <iostream>
#include "circle.h"

int main() {

    float r1, x1, y1, r2, x2, y2, r3, x3, y3, aAround, bAround, cAround, aIn, bIn, cIn, r4, x4, y4;

    Circle circle1(r1, x1, y1);
    std::cout << "Enter the parameters of the first circle (radius, x center, y center): ";
    std::cin >> r1 >> x1 >> y1;
    circle1.set_circle(r1, x1, y1);

    Circle circle2(r2, x2, y2);
    std::cout << "Enter the parameters of the second circle (radius, x center, y center): ";
    std::cin >> r2 >> x2 >> y2;
    circle2.set_circle(r2, x2, y2);

    Circle circle3(r3, x3, y3);
    std::cout << "Enter the parameters of the third circle (radius, x center, y center): ";
    std::cin >> r3 >> x3 >> y3;
    circle3.set_circle(r3, x3, y3);

    std::cout << "The square of circle 1 is: " << circle1.square() << std::endl;
    std::cout << "The square of circle 2 is: " << circle2.square() << std::endl;
    std::cout << "The square of circle 3 is: " << circle3.square() << std::endl;

    std::cout << "Enter the sides of a triangle which wil be circumscribed around the triangle  (a, b, c): ";
    std::cin >> aAround >> bAround >> cAround;

    if (circle1.triangle_around(aAround, bAround, cAround)) {
        std::cout << "Circle 1 can be circumscribed around the triangle." << std::endl;
    } else {
        std::cout << "Circle 1 cannot be circumscribed around the triangle." << std::endl;
    }
    if (circle2.triangle_around(aAround, bAround, cAround)) {
        std::cout << "Circle 2 can be circumscribed around the triangle." << std::endl;
    } else {
        std::cout << "Circle 2 cannot be circumscribed around the triangle." << std::endl;
    }
    if (circle3.triangle_around(aAround, bAround, cAround)) {
        std::cout << "Circle 3 can be circumscribed around the triangle." << std::endl;
    } else {
        std::cout << "Circle 3 cannot be circumscribed around the triangle." << std::endl;
    }

    std::cout << "Enter the sides of a triangle which wil be circumscribed around the triangle  (a, b, c): ";
    std::cin >> aIn >> bIn >> cIn;

    if (circle1.triangle_in(aIn, bIn, cIn)) {
        std::cout << "Circle 1 can be inscribed in the triangle." << std::endl;
    } else {
        std::cout << "Circle 1 cannot be inscribed in the triangle." << std::endl;
    }
    if (circle2.triangle_in(aIn, bIn, cIn)) {
        std::cout << "Circle 2 can be inscribed in the triangle." << std::endl;
    } else {
        std::cout << "Circle 2 cannot be inscribed in the triangle." << std::endl;
    }
    if (circle3.triangle_in(aIn, bIn, cIn)) {
        std::cout << "Circle 3 can be inscribed in the triangle." << std::endl;
    } else {
        std::cout << "Circle 3 cannot be inscribed in the triangle." << std::endl;
    }

    std::cout << "Enter the parameters of the circle which will be intersects with other circles (radius, x center, y center): ";
    std::cin >> r4 >> x4 >> y4;

    if (circle1.check_circle(r4, x4, y4)) {
        std::cout << "Circle 1 intersects with specified circle" << std::endl;
    } else {
        std::cout << "Circle 1 does not intersect with specified circle" << std::endl;
    }
    if (circle2.check_circle(r4, x4, y4)) {
        std::cout << "Circle 2 intersects with specified circle" << std::endl;
    } else {
        std::cout << "Circle 2 does not intersect with specified circle" << std::endl;
    }
    if (circle3.check_circle(r4, x4, y4)) {
        std::cout << "Circle 3 intersects with specified circle" << std::endl;
    } else {
        std::cout << "Circle 3 does not intersect with specified circle" << std::endl;
    }
    return 0;

}
