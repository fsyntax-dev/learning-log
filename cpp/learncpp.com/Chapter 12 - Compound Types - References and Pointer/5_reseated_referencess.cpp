#include <iostream>

// reference can't be reseated = reference can't be change where it refer to


int main(){

    int x {5};
    int y {10};

    int& ref = x;       // hold x value = 10
    ref = y;            // assign y value to x via ref
                        // b -> ref -> a


    return 0;
}