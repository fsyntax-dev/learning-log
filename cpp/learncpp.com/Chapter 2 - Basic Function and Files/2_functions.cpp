#include <iostream>

int numSingle{};

void printInfo(){
    std::cout << "Enter an integer: ";
}

void getValue(){
    std::cin >> numSingle;
}

void calcValue(){

    int numDouble{numSingle * 2};
    std::cout << "The number is: " << numDouble << "\n";
}

int main(){

    printInfo();
    getValue();
    calcValue();

    return 0;
}