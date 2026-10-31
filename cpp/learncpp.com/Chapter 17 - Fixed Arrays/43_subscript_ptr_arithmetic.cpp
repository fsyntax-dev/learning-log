#include <iostream>

// subscript implemented via pointer arithmetic
// array[n] = *((array_ptr) + (n))

int main(){

    const int array [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << array[5] << "\n";
    // address of array[0] + 5
    std::cout << *((&array[0]) + (5)) << "\n";

    return 0;
}