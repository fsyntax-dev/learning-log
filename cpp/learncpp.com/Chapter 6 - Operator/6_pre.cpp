#include <iostream>

// pre - affect original
//     - increment before assigning


int main(){

    int x{5};
    int y{++x};

    std::cout << x << "\n"; // prefix affect original x
    std::cout << y << "\n";

    return 0;
}