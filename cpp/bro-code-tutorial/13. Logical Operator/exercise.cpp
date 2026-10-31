#include <iostream>

int main() {
    int num;
    
    std::cout << "Enter a number: ";
    std::cin >> num;
    
    if (num > 0 || num == 0) {
        std::cout << "The number is positive or zero.\n";
    } else {
        std::cout << "The number is negative.\n";
    }

    return 0;
}
