#include <iostream>
#include <cstdlib> // for std::exit()

// halt - terminate the program
// std::exit() - function that stop the program

int main(){

    std::cout << "Program starts" << "\n";

    std::exit(0);

    std::cout << "This line will never run" << "\n";   

    return 0;
}