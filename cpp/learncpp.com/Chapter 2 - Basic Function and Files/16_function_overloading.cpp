#include <iostream>

//Function Overloading  - Same function name but different parameter taken
//                      - Complier takes what suits with arguement passes

int add(int x, int y){
    return x + y;
}
int add(int x, int y, int z){
    return x + y + z;
}

int main(){

    std::cout << add(5,10) << "\n";
    std::cout << add(5,10,20) << "\n";

    return 0;
}