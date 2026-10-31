#include <iostream>

template <typename T>
struct Pair{
    T first{};
    T second{};
};

template <typename T>   
using Point = Pair<T>;  // alias

template <typename T>
constexpr T max(Pair<T>& value){
    return (value.first > value.second ? value.first : value.second);
}

int main(){

    Point<int> valueA{5, 8};

    return 0;
}