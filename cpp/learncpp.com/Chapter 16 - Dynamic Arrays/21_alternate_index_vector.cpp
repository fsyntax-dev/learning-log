#include <iostream>
#include <vector>

// alternative way to index an array - pointer + integer
// .data() - returns a pointer of first elements

int main(){

    std::vector valueA {1, 2, 3, 4, 5};


    std::cout << valueA.data()<< "\n";          // function return a pointer of 1st elements
    std::cout << &valueA[0] << "\n";            // pointer by & operator

    int index {3};                              // non constexpr signed int   
    std::cout << valueA.data()[index] << "\n";  // pointer of 1st element + index which is 3


    return 0;
}