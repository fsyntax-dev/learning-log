#include <iostream>

// reference - alias/second name for existing variable
//           - it just refer to an original variable

// purpose - avoid creating mutiple copy
//         - create as alias

// & - reference to
// int& y{x}; - integer y reference to x

int main(){

    int x {5};
    int& y {x}; // y is just another name for x

    std::cout << x << "\n";     // output original x
    std::cout << y << "\n";     // output reference x


    return 0;
}