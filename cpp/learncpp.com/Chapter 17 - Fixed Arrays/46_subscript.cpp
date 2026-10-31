#include <iostream>

// *(ptr + N)
// ptr is pointing to ptr[0] then *(ptr + 1) return index 1
// if ptr is pointing to ptr[2] then *(ptr + 1) return index 3
// best practice - subcripting when index is element 0, so it can be line up with other element

int main(){

    int array[] {1, 2, 3, 4, 5};
    int* ptr {array};

    std::cout << &array[0] << "\t" << ptr << "\n";

    std::cout << *(ptr + 2) << "\n";

    ptr = &array[2];

    std::cout << ptr[1] << "\n";
    std::cout << *(ptr + 1) << "\n";

    return 0;
}