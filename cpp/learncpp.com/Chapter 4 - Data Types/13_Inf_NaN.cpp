#include <iostream>

//Inf - infinity
//NaN - not a number

int main(){

    double zero{0.0};

    double valueA{5.0/ zero};
    double valueB{zero/zero};

    std::cout << valueA << "\n";    //output: inf
    std::cout << valueB << "\n";    //output: nan

    return 0;
}