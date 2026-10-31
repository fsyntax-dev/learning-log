#include <iostream>

int main(){

    //Program that triple an integer

    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    int tripleNum{num * 3};

    std::cout << "Triple of " << num << " is: " << tripleNum << "\n";
    

    return 0;
}