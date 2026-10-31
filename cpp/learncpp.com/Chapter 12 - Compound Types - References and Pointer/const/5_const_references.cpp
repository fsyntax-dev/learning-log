#include <iostream>

int main(){

    int x {10};
    const int& refX{x};         // can't change the reference/alias

    x = 20;                     // can change r value
    
    std::cout << x << "\n";

    return 0;
}