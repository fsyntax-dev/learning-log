#include <iostream>

// pass by value - create another copy of a variable
// variable x -> copy of variable x

int add(int x, int y){
    return x + y;
}

int main(){

    int x{5};
    int y{10};

    std::cout << add(x, y) << "\n"; // call function create a copy of x and y
                                    // this where pass by value
                                    // expensive cause it cost memory

    return 0;
}