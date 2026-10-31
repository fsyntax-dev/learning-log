#define NDEBUG
#include <iostream>
#include <cassert>

// NDEBUG - Assert Preprocessor Macro is defined then assert gets disable
// 

double divide(int x, int y){
    assert(y != 0);
    return x / y;
}

int main(){

    std::cout << divide(5,0) << "\n";


    return 0;
}