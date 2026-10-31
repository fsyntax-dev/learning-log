#include <iostream>
#include <chrono>


int fib(int x){
    
    if(x == 0) { return 0; }
    if(x == 1) { return 1; }

    return fib(x-1) + fib(x-2);
}

int main(){
    
    for(int count {0}; count < 50; ++count){
        std::cout << fib(count) << " ";
    }
    std::cout << "\n";


    return 0;
}