#include <iostream>

int main(){
    
    // initialized x memory address
    int x {5};
    int* ptr {&x};              

    std::cout << *ptr << "\n";

    // assign y memory address
    int y {6};
    ptr = &y;                   

    std::cout << *ptr << "\n";

    // dereference ptr and assign literal 7
    *ptr = 7;                   

    std::cout << *ptr << "\n";

    return 0;
}