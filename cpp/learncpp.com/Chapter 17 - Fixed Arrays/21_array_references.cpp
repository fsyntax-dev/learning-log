#include <iostream>
#include <array>

int main(){

    int x {5};
    int y {5};

    // array can hold objects like fundamental types and compound types

    std::array arrayOne {x , y};    // array of variable
    std::array arrayTwo {&x, &y};   // array of pointer

    // but array can't hold references bcs reference isn't an object
    // array element must be assignable

    // std::reference_wrapper - to make array of references


    return 0;
}