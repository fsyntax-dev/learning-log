#include <iostream>

int main(){

    // dynamicalllly allocate a variable
    int* ptrOne {new int (10)}; // direct initialization
    int* ptrTwo {new int {5}};  // uniform initiallization

    // deleting variable - to free the memor for reuse
    delete ptrOne;              // return the memory back to OS
    ptrOne = nullptr;           // set to be null pointer


    // delete keyword - free the memory - return memory being pointed back to OS
    // delete a pointer that is not pointing to DMA may cause bad things to happen


    return 0;
}