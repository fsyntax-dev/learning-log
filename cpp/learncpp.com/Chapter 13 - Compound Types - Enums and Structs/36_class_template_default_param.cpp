#include <iostream>

template <typename T = int, typename U =int>
struct Pair{
    T first{};
    U second{};
};

template <typename T, typename U>
Pair(T, U) -> Pair <T, U>;

int main(){

    Pair valueA {5, 7};                         // use default type parameter
    Pair<double, double> valueB {5.50, 5.51};   // explicitly overrided type


    return 0;
}