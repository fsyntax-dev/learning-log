#include <iostream>

// pointer          - variable that hold address of another variable
// function pointer - variable that hold address of function

void foo(){
    std::cout << "Foo" << "\n";
}

int main(){

    foo(); // when we call function with operator() it will jump to that address directly
    
    std::cout << foo << "\n";   // when function is refer without operator()
                                // operator<< tries to print function pointer
                                // but it fails bcs it doesn't know how to print function pointer
                                // then it converted to bool
                                // which is 1 (true) bcs function pointer is non nullptr

    return 0;
}