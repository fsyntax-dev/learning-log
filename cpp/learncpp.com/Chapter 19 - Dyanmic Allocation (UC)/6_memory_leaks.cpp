#include <iostream>

// new      - request memory from OS
// delete   - return memory to OS

// memory leaks - program loss the address of allocated memory before return it to OS
//              - can't delete it because doesn't where it is but still considered used by the program
//              - makes entire machine run slow/crash
//              - after terminate that program OS can clean up and reclaim that leaked memory

// it can happen when:

// 1. out of scope
void Foo(){
    int* ptr {new int};     // ptr allocate
}                           // scope end here, ptr is destroyed bcs it a still a normal variable (in stack)
                            // this called memory leaks

int main(){

    // 2. assign with other address
    int valueA {5};
    int* ptrA {new int{}};

    // delete ptr;          // return memory back to OS
    ptrA = &valueA;         // old address lost


    // 3. re-assign
    int* ptrB {new int{}};  
    ptrB = new int();       // assign with second memory, first memory lost
    

    return 0;
}