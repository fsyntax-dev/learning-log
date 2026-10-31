#include <iostream>

// c++ doesn't gurantees what will happen to content of deallocated memory
// a pointer that pointing to deallocated memory called as dangling pointer

int main(){

    int* ptr {new int};

    std::cout << *ptr << "\n";

    delete ptr;                 // dangling pointer

    std::cout << *ptr << "\n";  // junk

    ptr = nullptr;              // assign null pointer

    std::cout << *ptr << "\n";



    return 0;
}