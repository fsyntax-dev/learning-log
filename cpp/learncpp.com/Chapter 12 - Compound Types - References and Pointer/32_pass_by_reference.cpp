#include <iostream>

int addValue(int x, int y){                 
    return x + y;
}

int addReference(int& x, int& y){
    return x + y;
}


int main(){

    int x {5}, y {10};

    std::cout << addValue(x, y) << "\n";        // pass by value - create copy of x and y
    std::cout << addReference(x, y) << "\n";    // pass by reference - reference bound to x and y

    return 0;
}