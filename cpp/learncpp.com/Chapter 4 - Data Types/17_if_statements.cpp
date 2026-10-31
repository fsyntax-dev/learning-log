#include <iostream>

// if statements - execute code if the condition is true

int main(){

    int x{};
    
    std::cout << "Enter an integer: ";
    std::cin >> x;

    
    if      (x > 10){
        std::cout << "Greater" << "\n";
    }

    else if (x < 10){
        std::cout << "Least" << "\n";
    }
    else{
        std::cout << "Invalid" << "\n";
    }   

    return 0;

}