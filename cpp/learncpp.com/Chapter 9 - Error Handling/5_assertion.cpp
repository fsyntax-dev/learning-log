#include <iostream>
#include <cassert>

// assertion - expression that will be true unless there's a bug
// assert(condition) - stops your program when a bug violates your code

double divide(double x, double y){
    assert(y == 0);
    int sum{ x / y };
    std::cout << sum << "\n";
    return sum;
    
}

int main(){

    divide(5,0);


    return 0;
}