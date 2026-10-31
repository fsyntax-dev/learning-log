#include <iostream>

// c style array can be const and constepxr
// intializer can be change afterwards

int main(){

    const int arrayOne[] {1, 2, 3, 4, 5};

    constexpr int arrayTwo [] {1, 2, 3, 4, 5};

    return 0;
}