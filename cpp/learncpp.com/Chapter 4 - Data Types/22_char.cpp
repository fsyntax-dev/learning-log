#include <iostream>

// char - a character stores as integer using ASCII

int main(){

    char valueA{'A'};

    std::cout << valueA << "\n";        //print literal A
    std::cout << int(valueA) << "\n";   //print ASCII code 


    char valueB{1};                 
    char valueC{'1'};

    std::cout << valueB << "\n";        // as integer
    std::cout << valueC << "\n";        // as character

    return 0;
}