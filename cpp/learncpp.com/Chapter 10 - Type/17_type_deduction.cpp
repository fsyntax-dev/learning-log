#include <iostream>
using namespace std::literals;  

// To use auto for std::string 

int main(){

    auto stringOne{"FirstName"s};       // s for string literal
    auto stringTwo{"LastName"sv};       // sv for string view literal

    std::cout << typeid(stringOne).name() << "\n";
    std::cout << typeid(stringTwo).name() << "\n";

    return 0;
}
