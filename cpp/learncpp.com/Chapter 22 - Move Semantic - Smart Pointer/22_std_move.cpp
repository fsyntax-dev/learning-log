#include <iostream>
#include <utility>

// std::move - cast lvalue to rvalue reference
//           - it allow move semantics to be called
//           - move semantic works with rvalue reference


template <typename T>
void swapVal(T& x, T& y){
    std::cout << "Swap Executed" << "\n";
    T temp {std::move(x)};                  // temp hold x
    x = std::move(y);                       // x assign y
    y = std::move(temp);                    // y assign x which hold b temp
}

template <typename T>
void printVal(T& x, T& y){
    std::cout << "x: " << x << "\n";
    std::cout << "y: " << y << "\n";
}

int main(){

    int x {5};
    int y {10};

    printVal(x, y);

    swapVal(x, y);
    
    printVal(x, y);

    return 0;
}