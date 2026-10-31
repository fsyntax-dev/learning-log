#include <iostream>

// memory divided into diff segment

// Text Segment                 - Code Segment  - where compileds program sits in memory
//                                              - read only segment

// Uninitialized Data Segment   - BSS Segment   - zero-initialized global and static variable stored
// Initialized Data Segment     - Data Segment  - initialized global and static variable stored

// Heap                                         - dynamically allocated variables
// Call Stack                                   - local variables, function parameters and other function-realted 

// Uniitialized Data Segment
int a;
static int b;

// Initialized Data Segment
int x {5};
static int y{10};

int main(){


    return 0;
}