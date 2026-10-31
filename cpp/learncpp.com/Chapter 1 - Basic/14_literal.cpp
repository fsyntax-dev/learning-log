#include <iostream>

int main(){

    //literal - a fixed value written directly in code

    std::cout << 5 << "\n"; //print value of a literal
                            //hardcoded to program

    int x{5};               //stored in memory, so it can change 
    std::cout << x << '\n'; //print value of a variable, copy of variable x value

    return 0;   
}