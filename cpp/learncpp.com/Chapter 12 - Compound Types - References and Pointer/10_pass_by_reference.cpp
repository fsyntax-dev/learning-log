#include <iostream>

// pass by reference - declare reference in parameters
//                   - use & in paramters
//                   - to avoid making copy

int add(int& x, int& y){
    return x + y;
}

int main(){

    int x{5};
    int y{10};

    std::cout << add(x, y) << "\n";
    std::cout << x << "\n";

    return 0;
}