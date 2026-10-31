#include <iostream>

// type deduction - compiler figures out the type automatically based on arguement given
// use auto keyword


int main(){

    auto valueA{5.0};   // literal 5.0 deduces as double
    auto valueB{1};     // literal 1 deduces as int
    auto valueC{'c'};   // literal c deduces as char

    std::cout << typeid(valueA).name() << "\t";
    std::cout << typeid(valueB).name() << "\t";
    std::cout << typeid(valueC).name() << "\t";

    return 0;
}