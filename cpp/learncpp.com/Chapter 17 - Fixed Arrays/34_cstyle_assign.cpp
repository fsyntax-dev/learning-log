#include <iostream>

// c++ arrays don't support assignment

int main(){

    int array[] {1, 2, 3, 4, 5};

    array[0] = 10;              // assign individually is fine
    array[0] = {5, 6, 7}        // doesn't work

    // if you wanna sign a new list in array better use vector


    return 0;
}