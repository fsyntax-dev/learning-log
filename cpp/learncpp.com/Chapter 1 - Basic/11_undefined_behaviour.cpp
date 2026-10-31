#include <iostream>

int main(){

    //undefined behaviour - code that does not define what should happen
    //                    - the result can be almost anything outside the code expectation

    int x;              //uninitialized variable
    int y{5};           //initialiazed variable
    int sum = x + y;    //expresssion statement

    std::cout << "x is :" << x << "\n";
    std::cout << "The number is :" << sum << "\n";

    return 0;
}