#include <iostream>

int main(){

    int arrayOne[] {1, 2, 3, 4, 5};                 // 4 bytes * 5 initializer
    int arrayTwo[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << sizeof(arrayOne) << " bytes" <<"\n";
    std::cout << sizeof(arrayTwo) << " bytes" <<"\n";

    return 0;
}