#include <iostream>

int main(){

    char valueA{};

    std::cout << "Input: ";                                 //assume user input ab

    std::cin.get(valueA);
    std::cout << "You entered: " << valueA << "\n";         // a

    std::cin.get(valueA);
    std::cout << "You also entered: " << valueA << "\n";    // b    

    

    return 0;
}