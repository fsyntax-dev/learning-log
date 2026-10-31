#include <iostream>
#include <string>
#include <array>

// C++ has three types of memory allocation
//      1. Static Memory Allocation     - run until the ends of the programs
//      2. Automatic Memory Allocation  - for function parameters and local variables
//                                      - memory allocated during existance and destroyed after exit scope

//      Both has same characteristic 
//          i. size known at compile time 
//          ii.allocation and deallocation happens automatically

//      3. Dynamic Memory Allocation    - request memory manually at runtime and responsibe for freeing it

int main(){

    // hoping student doesn't exceed 10000 
    std::array <std::string, 10000> studentList;
    // memory waste
    // normal variable allocated in stack - if exceeds - stack overflow - OS will close the programs

    return 0;
}