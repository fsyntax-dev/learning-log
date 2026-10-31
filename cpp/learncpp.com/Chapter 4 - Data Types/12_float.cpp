#include <iostream>
#include <iomanip>

// float        - single precision
// double       - double precision
// long double  - extended precision

int main(){

    float       valueA{};
    double      valueB{0.1};
    long double valueC{2931.1937372839433293403234};

    std::cout << valueB << "\n";
    std::cout << valueC << "\n";

    // output manipulator to override precision
    std::cout << std::setprecision(17);
    std::cout << valueB << "\n";
    std::cout << valueC << "\n";



    return 0;
}