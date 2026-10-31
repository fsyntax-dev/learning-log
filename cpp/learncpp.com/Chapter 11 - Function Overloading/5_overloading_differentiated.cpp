#include <iostream>

// Based on Types of Parameters

int add(int x, int y){
    return x + y;
}

double add(double x, double y){
    return x + y;
}

int main(){

    std::cout << add(5,5) << "\n";
    std::cout << add(5.6,5.9) << "\n";

    return 0;
}