#include "type1.h"
#include "iostream"
#include "type2.h"

int main() {
    std::cout << "The first type of equation" << std::endl;
    type1 EquationType1;
    EquationType1.show();
    EquationType1.Get_answer();
    std::cout << "----------"<< std::endl;
    std::cout << "The second type of equation" << std::endl;
    std::cout << "Enter the coefficient  A" << std::endl;
    double a;
    std::cin >> a;
    type2 EquationType2(a);
    EquationType2.show();
    EquationType2.Get_answer();
    return 0;
}
