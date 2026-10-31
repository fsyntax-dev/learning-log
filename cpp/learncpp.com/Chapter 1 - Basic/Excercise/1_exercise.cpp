#include <iostream>

int main(){

    //Program that multiply input by 2

    std::cout << "Enter an integer: ";

    int num{};
    std::cin >> num;

    int doubleNum{num * 2};

    std::cout << "Double that number is: " << doubleNum << "\n";

    return 0;

}