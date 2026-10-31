#include <iostream>

int main(){

    char valueA{};                                          // input as "abcd"

    std::cout << "Enter anything: ";
    std::cin >> valueA;

    std::cout << "You have entered: " << valueA << "\n";    // only print "a" and "bcd" truncated

    return 0;
}