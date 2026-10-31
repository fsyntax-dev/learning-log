#include <iostream>

// when subscript an array - pointer arithmetic were used

int main(){

    const int array[] {1, 2, 3, 4, 5};

    std::cout << array[2] << "\n";
    std::cout << *(array + 2) << "\n"; 

    return 0;
}