#include <iostream>

// algo - suquence of instruction that produce result/solve problem


int plusOne(){
    static int state{3};
    ++state;
    return state;
}

int main(){

    std::cout << plusOne() << "\n";
    std::cout << plusOne() << "\n";
    std::cout << plusOne() << "\n";

    return 0;
}