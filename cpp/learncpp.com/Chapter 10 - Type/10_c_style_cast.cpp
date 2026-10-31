#include <iostream>

// C Style Cast  - (type) variable

// Function Cast - alternate to C Style Cast provide officialy for C++
//               - type(variable)

int main(){

    int x{10};
    int y{4};

    std::cout << x / y << "\n";
    std::cout << (double) x / y << "\n";    // C Style Cast
    std::cout <<  double(x) / y << "\n";    // Function Cast

    // best practice avoid using C Style Cast

    return 0;
}