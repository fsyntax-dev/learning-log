#include <iostream>

// Overload Resolution - process of matching function call to specific overload function

void print(int x){
    std::cout << x << "\n";
}

void print(double x){
    std::cout << x << "\n";
}

int main(){

    print(5);       // 5 is int         -> match with print(int x)
    print(5.55);    // 5.55 is double   -> match with print(double x)

    // what if arguement doesn't match with parameters

    print('a');     // it will implicitl convert

    return 0;
}