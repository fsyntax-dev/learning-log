#include <iostream>

int main(){

    // new to allocate memory address
    int* ptrVar {new int};          // 4 bytes in heap
    int* ptrArray {new int[10]};    // 4 bytes x 10 length = 40 bytes in heap

    // delete to deallocate memory address - return to OS
    delete ptrVar;
    delete ptrArray;

    return 0;
}