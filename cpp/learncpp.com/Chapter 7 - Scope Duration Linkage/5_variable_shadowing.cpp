#include <iostream>

// variable shadowing - a variable declared in the same name
//                      as existing outer scope

//                      it happens when we declare same variable name inside 
//                      function the inner scope will hide the global

int x {5};                      // global x

void example(){
    int x = 10;                 // local x shadow global x
    std::cout << x << "\n";
    std::cout << :: x << "\n";  // access global x with :: x
}

int main(){

    std::cout << x << "\n";

    example();

    return 0;
}