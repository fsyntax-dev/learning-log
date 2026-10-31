/*
The const keyword specifies that a variable's value is constant
Tells the compiler to prevent anything from modifying it
(read only)

const dataype variable = value

should be use if the variable is not going to be change or fixed

*/

#include <iostream>

int main(){

    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;

    std::cout << circumference << " cm";
    
    return 0;
}