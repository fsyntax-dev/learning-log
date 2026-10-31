#include <iostream>

// top-level const - the variable is const - 
//                 - can't reassign it

// low-level const - pointer points to const variable
//                 - can change where the pointer point to

int main(){

    // top-level const
    const int valueA {10};
    const int valueB {5};

    // low-level const
    const int* pValueC = &valueA;   // C pointed to A
    pValueC = &valueB;              // C changed pointed to B



    return 0;
}