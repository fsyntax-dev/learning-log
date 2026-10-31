#include <iostream>

// lambda   - anonymous function 
//          - function without any name - called as function literal
//          - also can use with name if want to reuse
//          - not an actual function but it is a functor with operator()
// functor  - function object (struct or class)                       

int main(){

    std::cout << [](int x, int y) { return x * y;}(5,5) << "\n";

    int x {5};
    std::cout << [x](int y) { return x * y;} (5) << "\n";

    auto multiply {
                    [x] (int y) {
                        return x * y;
                    }
    };

    std::cout << multiply(5) << "\n";


    return 0;
}