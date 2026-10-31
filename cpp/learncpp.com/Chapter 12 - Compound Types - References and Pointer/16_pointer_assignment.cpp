#include <iostream>

int main(){

    int x {5};
    int* ptr {&x};                          // initialized ptr and store memory address of variable x

    std::cout << *ptr <<" -> "<<ptr << "\n";

    int y {6};
    ptr = &y;                               // assign memory address of variable y

    std::cout << *ptr <<" -> "<<ptr << "\n";

    return 0;
}