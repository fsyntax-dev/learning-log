#include <iostream>
#include <vector>

// copy semantic - rules that determine how copies of objects are made
//  1. copy construction
//  2. copy assignment 

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4, 5};  // original constructor
    std::vector<int> arrayTwo {arrayOne};       // copy constructor is called here

    return 0;
}