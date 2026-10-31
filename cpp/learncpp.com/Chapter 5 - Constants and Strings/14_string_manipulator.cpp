#include <iostream>
#include <string>
// why use std::ws? because to ignore whitespace
int main(){

    int choice{};
    std::cout << "Pick 1 or 2: ";
    std::cin >> choice;

    std::string name{};
    std::cout << "Enter your full name: ";
    std::getline(std::cin >> std::ws, name);

    std::cout << "Hello, " << name << ". " << "Your choice is: " << choice << "\n";


    return 0;
}