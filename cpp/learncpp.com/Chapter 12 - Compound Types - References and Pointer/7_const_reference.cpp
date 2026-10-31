#include <iostream>



int main(){

    // constant reference can be bind to constant variable
    // plain reference can't be bind to constant variable
    const int x {5};
    const int& y {5};

    std::cout << y << "\n";

    y = 10; // can't modify object through reference

    return 0;
}