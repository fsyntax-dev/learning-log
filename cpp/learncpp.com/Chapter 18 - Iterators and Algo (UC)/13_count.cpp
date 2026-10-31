#include <iostream>
#include <array>
#include <algorithm>
#include <string_view>

// std::count       - counts elements in range equal to given value
// std::count_if    - counts elements in range satisfy a condition 

bool containsNut(std::string_view str){
    return str.find("nut") != std::string_view::npos;
}

int main(){

    std::array array{"apple", "banana", "walnut", "lemon", "peanut"};

    auto nuts {std::count_if(array.begin(), array.end(), containsNut)};

    std::cout << nuts << "\n";

    return 0;
}