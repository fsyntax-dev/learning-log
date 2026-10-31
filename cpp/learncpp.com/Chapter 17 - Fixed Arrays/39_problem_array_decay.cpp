#include <iostream>


void printArraySize(int array[]){
    std::cout << sizeof(array) << " bytes" << "\n";
    // will return the size of a pointer rather than the size of the array

    // output - warning: 'sizeof' on array function parameter 'array' will return size of 'int*'
}

int main(){

    int array [] {1, 2, 3, 4, 5};

    
    return 0;
}