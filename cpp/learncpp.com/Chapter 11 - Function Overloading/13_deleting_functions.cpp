#include <iostream>

// deleting function - tell compiler to not used specific function 
// = delete means “I forbid this”, not “this doesn’t exist”

void printInt(int x){
    std::cout << x << "\n";
}

void printInt(bool) = delete;

int main(){

    printInt(5);
    printInt(true);             // when it tries to do so then give a compile time error

    return 0;
}