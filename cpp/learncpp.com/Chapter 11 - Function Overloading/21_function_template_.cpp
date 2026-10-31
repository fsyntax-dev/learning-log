#include <iostream>
#include <iomanip>

template<typename T, typename U>
auto divide(T x, U y){
    return x / y;
}

int main(){

    std::cout << std::setprecision(3) << divide(8.99, 3.99) << "\t";
    std::cout << sizeof(divide(8.99, 3.99)) << "\n";


    std::cout << divide(10, 2) << "\t";
    std::cout << sizeof(divide(8, 3)) << "\n";


    return 0;
}