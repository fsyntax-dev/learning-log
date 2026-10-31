#include <iostream>

int main(){

    //single step: combine declare and assign
    int x = 4;
    
    //two step : declare and assign later
    int y; //declaration
    y = 5; //assignment

    int sum = x + y;

    //output
    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << sum << "\n";
    
    return 0;

}