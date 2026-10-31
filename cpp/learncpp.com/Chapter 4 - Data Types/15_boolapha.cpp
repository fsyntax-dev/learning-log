#include <iostream>

// std::boolalpha to print actual true false 

int main(){

    bool valueA{true};
    bool valueB{false};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";

    std::cout << std::boolalpha;

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";

    return 0;
}