#include <iostream>
#include <vector>

template <typename T>
void printArray(const std::vector<T>& array){
    for(T number : array){
        std::cout << number << " ";
    }
    std::cout << "\n";
}

int main(){

    // list initialization      
    std::vector<int> arrayOne {1, 2, 3, 4, 5};      // initialize the elements

    // direct initialization
    std::vector<int> arrayTwo (5);                  // initialize the array size and default element

    std::vector<int> arrayThree (5, 1);             // initialize the array size and fixed element 1

    printArray(arrayOne);
    printArray(arrayTwo);
    printArray(arrayThree);

    return 0;
}