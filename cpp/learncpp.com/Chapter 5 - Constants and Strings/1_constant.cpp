#include <iostream>

// constant - value that not change during execution
//      1. named constant       - related to indentifier
//          i.  constant variable
//          ii. object like macros
//          iii.enumerate constant
//      2. literal constant     - not related to indentifier

int main(){

    
    int valueA{4};          // not a constant value
    valueA = 5;             // can be change

    //consant variable
    const int valueB{10};

    return 0;
}