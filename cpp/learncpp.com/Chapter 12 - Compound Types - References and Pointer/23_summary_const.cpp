#include <iostream>

// int* const   - pointer to constant   - to make pointer constant
// const int*   - contant to pointer    - for pointer to access constant variable


int main(){

    // pointer to constant
    int valueA {5};                     // non-const variable
    int* const pValueA{&valueA};        // to make constant pointer


    // constant to pointer
    const int valueB{10};               // const variable
    const int* pValueB {&valueB};       // access constant variable

    const int* const pValueC{&valueB};  // access constant variable + constant pointer
    

    return 0;
}