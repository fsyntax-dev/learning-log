#include <iostream>

// static_cast<type>(expression)

int main(){

    int x{10};
    int y{4};

    // why this
    std::cout << static_cast<double>(x)/y << "\n";
    // convert int to float = float/int =  arithmetic conversions = float/float = result float
    // convert -> arithmetic conversion -> arithmetic operation -> result
    // 10 -> 10.0 -> 10.0/4 -> 10.0/4.0 = 2.5

    // but not this
    std::cout << static_cast<double>(x/y) << "\n";
    // arithmetic operation -> convert -> result
    // int/int = int = convert = float
    // 10/4 = 2 = convert 2.0

    return 0;
}