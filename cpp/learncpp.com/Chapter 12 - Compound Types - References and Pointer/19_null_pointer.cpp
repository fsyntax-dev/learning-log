#include <iostream>

// pointer can hold - memory address and null value
// null pointer - pointer that hold null value 

// a pointer that set to null can be changed to point a valid object later


int main(){

    int* ptr {};                // null pointer

    std::cout << ptr << "\n";

    int x {5};
    ptr = &x;                   // no longer a null pointer

    std::cout << ptr << "\n";

    return 0;
}