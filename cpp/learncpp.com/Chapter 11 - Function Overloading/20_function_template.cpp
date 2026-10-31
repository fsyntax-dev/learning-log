#include <iostream>

// function with multiple template

template<typename T, typename U>
T max(T x, U y){
    return (x > y)? x : y;
}

template<typename T, typename U>
void print(T x, U y){
    std::cout << x << "\t";
    std::cout << y << "\t";
}

int main(){

    std::cout << max(2, 3.5) << "\n";

    print(5,5.5);

    return 0;
}