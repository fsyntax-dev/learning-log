#include <iostream>

int add(int *x, int *y){                
    return *x + *y;
}

int main(){

    int x{5}, y{10};                    // initialize variables

    std::cout << add(&x, &y) << "\n";   // access by memory of variables

    return 0;
}