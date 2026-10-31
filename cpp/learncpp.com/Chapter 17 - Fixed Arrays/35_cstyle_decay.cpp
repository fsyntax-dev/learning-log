#include <iostream>

// array decay - array implicitly convert into a pointer the element type 
//               that store the address of the pointer in the first element

// array decay - automatic conversion array to &array[0]

// array automatically convert into a pointer
// into its type - int array = int* array
// array pointer store the same address as array[0]

// C-style arrays decays to a pointer when evaluated



int main(){

    int array[5] {1, 2, 3, 4, 5};

    auto ptr {array};

    std::cout << (typeid(ptr) == typeid(int*)) << "\n";

    std::cout << &array << "\n";
    std::cout << &array[0] << "\n";

    return 0;
}