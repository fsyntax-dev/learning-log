#include <iostream>

// Class Template Argument Deduction - class template can deduce type automatically
// Only for C++17

template <typename T, typename U>
struct Pair{
    T first{};
    U second{};
};

template <typename T, typename U>   // Deduction Guide
Pair(T, U) -> Pair <T, U>;

int main(){

    Pair valueA{5.01, 5};

    return 0;
}