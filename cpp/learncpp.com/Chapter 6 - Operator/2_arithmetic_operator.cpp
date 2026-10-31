#include <iostream>

// +  addition
// -  subtraction
// *  multiplication
// /  division
// %  remainder

int main()
{
    constexpr int x{ 7 };
    constexpr int y{ 4 };

    std::cout << x / y << '\n';                         
    std::cout << static_cast<double>(x) / y << '\n';    // use static_cast to show floating point
    

    return 0;
}