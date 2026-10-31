#include <iostream>

// constexpr if statement - compile-time conditional
//                        - to make decision at compile time

int main(){

    constexpr float gravity{9.8};

    if constexpr (gravity == 9.8){
        std::cout << "Earth" << "\n";
    }
    else{
        std::cout << "Elsewhere" << "\n";
    }
    
    return 0;
}