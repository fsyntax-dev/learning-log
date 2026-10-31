#include <iostream>

// ambiguous match is a compile time error

void print(int x){
    std::cout << x << "\n";
}

void print(double x){
    std::cout << x << "\n";
}



int main(){

    print(static_cast<int>(5L)); // explicit conversion


    return 0;
}