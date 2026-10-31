#include <iostream>

// how operand of different type converted to common type
// operation can operate safely
// double + int converted to double + double

// long double (highest rank)
// double
// float
// long long
// long
// int (lowest rank)

int main(){

    double  valueA{5.5};                                // hast highest priority
    int     valueB{4};                                  // compared to int
    
    std::cout <<typeid(valueA + valueB).name() << "\n"; // result in double

    return 0;
}