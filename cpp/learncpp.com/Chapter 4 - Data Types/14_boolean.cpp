#include <iostream>

//boolean - true or false, created by george boole

int main(){

    bool valueA{};          //default initialize as false 0
    bool valueB{true};      // 1
    bool valueC{false};     // 0

    // ! - NOT operator
    bool valueD{!true};     // 0 not true   = false       
    bool valueE{!false};    // 1 not false  = true

    // initialize with integer
    bool valueFalse {0};
    bool valueTrue  {1};

    std::cout << valueA << "\n";
    std::cout << valueB << "\n";
    std::cout << valueC << "\n";

    std::cout << valueD << "\n";
    std::cout << valueE << "\n";

    std::cout << valueFalse << "\n";
    std::cout << valueTrue << "\n";

    return 0;
}