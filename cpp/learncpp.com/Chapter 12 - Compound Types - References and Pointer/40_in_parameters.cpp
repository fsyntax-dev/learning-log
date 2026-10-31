#include <iostream>

// in - input - give value to the function to do something


int add(int x, int y){                  // x and y are in paramater
    return x + y;                       // calculate the in paramater
}

int main(){

    std::cout << add(5, 10) << "\n";

    return 0;
}