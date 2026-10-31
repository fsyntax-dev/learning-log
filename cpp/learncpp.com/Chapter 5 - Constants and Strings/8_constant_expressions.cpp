#include <iostream>

// runtime      - program does evaluation while it’s running
// compile time - program does evaluation before it’s running

//constexpr - tell compiler that a value or function 
//            can be evaluated at compile time 

constexpr int doubleAdd(int x){
    return x + x;
}

int doubleMulti(int x){
    return x * x;
}

int main(){
    
    constexpr int add = doubleAdd(5);       // compile time
    std::cout << add << "\n";               

    std::cout << doubleMulti(5) << "\n";    // runtime time

    return 0;
}