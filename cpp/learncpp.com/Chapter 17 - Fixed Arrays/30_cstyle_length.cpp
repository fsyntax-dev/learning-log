#include <iostream>

// compiler can deduce array length based on the initializer

int main(){
    //redudancy - length 5 and initializer 5
    int arrayOne [5] {1, 2, 3, 4, 5};

    //initialize intializer and let compiler deduce the length - best practice
    int arrayTwo [] {1, 2, 3, 4, 5};               

    return 0;
}