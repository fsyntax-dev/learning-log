#include <iostream>

template <typename T>
T max(T x, T y){
    return (x > y)? x : y;
}

int main(){

    std::cout << max(5.5,5.49) << "\n";
    std::cout << max(7,5) << "\n";

    return 0;
}