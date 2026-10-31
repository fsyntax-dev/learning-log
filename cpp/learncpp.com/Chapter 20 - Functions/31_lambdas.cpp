#include <iostream>

// lambda   - isn't an actual function
// lambda   - an object called functor
// functor  - function object - object that contain operator() and can be callable like function
//          - function object - struct and class with operator()

// compiler secretly making a struct or class with operator()

int main(){

    std::cout << [](int x, int y) {return x / y;} (100,10) << "\n";

    return 0;
}