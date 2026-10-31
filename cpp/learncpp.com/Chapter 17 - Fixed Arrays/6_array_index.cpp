#include <iostream>
#include <array>

int main(){
    
    constexpr std::array<int, 5> arrayOne {1, 2, 3, 4, 5};

    std::cout << arrayOne[2] << "\n";
    std::cout << arrayOne[3] << "\n";

    std::cout << arrayOne.at(2) << "\n";
    std::cout << arrayOne.at(3) << "\n";

    return 0;
}