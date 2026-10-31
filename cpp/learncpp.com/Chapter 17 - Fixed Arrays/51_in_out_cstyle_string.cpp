#include <iostream>

// need to specify the array length when taking input
// because no length = no memory
// when inputting it will overflow because there's no memory allocation

void printWelcome(const char array[50]){
    std::cout << "Welcome "<< array << "!" << "\n";     // output
}

int main(){

    char firstName[50] {};

    std::cout << "Enter your first name: ";
    std::cin >> firstName;                              // input

    printWelcome(firstName);    

    return 0;
}