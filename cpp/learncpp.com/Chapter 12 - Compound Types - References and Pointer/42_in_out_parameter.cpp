#include <iostream>

// in and out paramater - receive value                             - IN
//                        modify it 
//                        return the result through same variable   - OUT

void addFive(int& number){
    number += 5;
}

int main(){

    int x {10};

    addFive(x);

    std::cout << x << "\n";

    return 0;
}