#include <iostream>

// stack has limited size (commonly 1 - 8 MB)
// if the program tries to put much information on stack will cause STACK OVERFLOW

// stack overflow - all the memory on stack has been allocated 
//                - further allocation begin overflow to other memory section
//                - why happen? allocate too many variables/ too many nested function call on the stack
                                     

int main(){

    int stackOver [10000000];                   // 40 MB
    std::cout << stackOver[0] << "\n";  
    std::cout << "Hi"  << "\n";                 // not gonna print bcs the program is terminated

    // stack aren't large enough to handle 40 MB array


    return 0;
}