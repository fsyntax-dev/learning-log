#include <iostream>

// how overloaded functions are differentiated
//      number of parameters
//      type of paramters

// Based on Number of Parameters

int add(int x, int y){
    return x + y;
}

int add(int x, int y, int z){
    return x + y + z;
}

int main(){

    std::cout << add(5,5) << "\t";
    std::cout << add(5,5,5) << "\t";

    return 0;
}