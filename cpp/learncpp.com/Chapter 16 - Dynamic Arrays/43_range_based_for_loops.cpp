#include <iostream>
#include <vector>

// element declaration should have the same type as array elements
// use auto keyword to prevent type conversion

// best practice - use auto keyword

int main(){

    std::vector arrayOne {1, 2, 3, 4, 5};

    for(auto number : arrayOne){
        std::cout << number << " ";
    }
    std::cout << "\n";

    return 0;
}