#include <iostream>

int main(){

    double valueA = 10 / 4;         // 2.0
    double valueB = 10.0 / 4.0;     // 2.5

    // it work fine if we initialize as arithmetic expression
    // but it don't work if we initialize literal first 

    int x {10};
    int y {4};

    double division = x / y;        // 2.0
    // this is where we should use explicit type conversion

    std::cout << division << "\n";


    return 0;
}

// static_cast
// dynamic_cast
// const_cast
// reinterpret_cat
// c-style cast
// function cast