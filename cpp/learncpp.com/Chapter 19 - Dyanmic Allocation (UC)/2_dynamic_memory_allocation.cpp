#include <iostream>

int main(){

    // allocate single variable dynamically
    new int;

    // when you dynamically allocate memory - asking OS to reserve memory for program to use
    // it will return address of memory to program

    // unlike static/automatic memory - program responsible for request and dispose memory

    // for stack - allocation deallocation is done automatically
    // for heap  - allocation deallocation is done manually

    return 0;

}