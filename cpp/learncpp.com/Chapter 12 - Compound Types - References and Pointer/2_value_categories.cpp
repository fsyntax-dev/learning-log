#include <iostream>

// value categories - lvalue and rvalue

// lvalue - left value - evaluate to an identifiable object
//        - indentifier
//              1. modifiedable value
//              2. unmodifiedable value 
// rvalue - right value - evaluate to a value
//        - literal

int return5(){
    return 5;
}


int main(){

    int x {5};          // x is lvalue
                        // 5 is rvalue

    const int y {5};    // y is unmodifiedable lvalue

    int z{return5()};   // return5 is rvalue since it return a value

    return 0;
}