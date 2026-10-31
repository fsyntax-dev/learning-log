#include <iostream>

template <typename T>
struct Pair{
    T first{};
    T second{};
};

template <typename T>
constexpr T max(Pair<T> value){
    return (value.first < value.second ? value.second : value.first);
}

int main(){

    Pair<int> valueA {5, 6};
    Pair<double> valueB {8.95, 8.45};
    
    std::cout << max(valueA) << "\n";
    std::cout << max(valueB) << "\n";

    return 0;
}