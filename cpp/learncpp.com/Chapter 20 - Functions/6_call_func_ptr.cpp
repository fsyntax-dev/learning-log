#include <iostream>

// function pointer can be set to nullptr
// if we call a nullptr function pointer = undefined behaviour

int foo(int x){
    return x;
}

int main(){

    int (*fcnPtr)(int) {foo};

    if(fcnPtr){                             // to make sure function pointer isnt nullptr
        std::cout << fcnPtr(10) << "\n";
    }

    fcnPtr = nullptr;

    if(fcnPtr){
        std::cout << fcnPtr(15) << "\n";
    }


    return 0;
}