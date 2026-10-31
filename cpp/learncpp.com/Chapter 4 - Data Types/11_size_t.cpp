#include <iostream>


int main(){

    int valueA{100};
    size_t size = sizeof(valueA);

    std::cout << sizeof(valueA) << "\n";
    std::cout << size << "\n";

    return 0;
}