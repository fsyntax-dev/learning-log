#include <iostream>

/*
    parenthesis -> multiplication & division -> addition & subtraction
*/

int main() {

    int calc1 = 6 - 5 + 4 * 12 / 2;
    int calc2 = ((6 - 5)+ 4) * 12 / 2;

    std::cout << calc1 << "\n";
    std::cout << calc2 << "\n";

    return 0;
    
}