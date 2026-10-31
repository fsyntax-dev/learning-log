#include <iostream>

// return statement - value from callee send to the caller.

int returnFive(){

    return 5;

}

int main(){

    std::cout << returnFive() << "\n";
    std::cout << returnFive() + 5 << "\n";

    return 0;
} 