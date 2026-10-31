#include <iostream>

int main(){

    // Unexpected Type
    auto x{10};
    auto y{4};
                                                // expecting for floating point
    std::cout << x / y << "\t";                 // 2    0.5 is truncated DATA LOSS    
    std::cout << typeid(x / y).name() << "\t";  // i for int

    return 0;
}