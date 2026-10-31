#include <iostream>

// template parameters has 2 types
//      1. type template parameters     - typename T
//      2. non-type template paramters  - int N

// non-type template parameters - paramters in template that take
//                                contant value instead of types

template<int N>                 // constant int value N
void printStars(){
    for(int i = 0; i < N; ++i){
        std::cout << "*" << "\t";
    }
}


int main(){

    printStars<5>();

    return 0;
}