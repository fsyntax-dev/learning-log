#include <iostream>

int main(){

    int x {5};
    int y {2};

    // pre increment - increase original and not copy - it just an action of increase
    // post increment - increase original and copy

    int sum {x++ + ++y};

    std::cout << sum << "\n";


    return 0;
}