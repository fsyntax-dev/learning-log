#include <iostream>

int add(int x, int y){
    return x + y;
}

int divide(int x, int y){
    return x / y;
}

int main(){

    auto valueA {add(5,10)};
    auto valueB {divide(10,4)};

    std::cout << valueA << "\t";
    std::cout << typeid(valueA).name() << "\n";

    std::cout << valueB << "\t";
    std::cout << typeid(valueB).name() << "\n";

    return 0;
}