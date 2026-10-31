#include <iostream>

// function template isn't actual function
// it just generate function then compiler will compile and execute

// template argument - explicitly tell compiler what type we wanna use
// function_name<type>(argument)

template <typename T>
T max(T x, T y){
    return (x > y)? x : y;
}

template <typename T>
void print(T x){
    std::cout << x << "\n";
}

int main(){

    std::cout << max<int>(1,2) << "\n";
    
    print(max<int>(5,3));

    return 0;
}