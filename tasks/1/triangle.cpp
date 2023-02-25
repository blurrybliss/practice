#include <iostream>
#include <cmath>

class Triangle {
private:
    double a, b, c;

public:
    bool exst_tr() {
        return a + b > c && b + c > a && c + a > b;
    }

    void set(double a1, double b1, double c1) {
        if (a1 > 0 && b1 > 0 && c1 > 0) {
            a = a1;
            b = b1;
            c = c1;
        }
    }

    void show() {
        std::cout << "Triangle sides: " << a << ", " << b << ", " << c << std::endl;
    }

    double perimetr() {
        return a + b + c;
    }

    double square() {
        double p = perimetr() / 2.0;
        return std::sqrt(p * (p - a) * (p - b) * (p - c));
    }
};
int main() {
    Triangle triangles[3];

    for (int i = 0; i < 3; i++) {
        double a, b, c;

        std::cout << "Enter the side lengths of Triangle " << i+1 << ": ";
        std::cin >> a >> b >> c;

        triangles[i].set(a, b, c);

        if (!triangles[i].exst_tr()) {
            triangles[i].show();
            std::cout << "Triangle " << i+1 << " is impossible!" << std::endl;
            i--;
        }
    }


    for (int i = 0; i < 3; i++) {
        std::cout << "Triangle " << i+1 << " perimeter: " << triangles[i].perimetr() << std::endl;
        std::cout << "Triangle " << i+1 << " area: " << triangles[i].square() << std::endl;
    }

    return 0;
}
