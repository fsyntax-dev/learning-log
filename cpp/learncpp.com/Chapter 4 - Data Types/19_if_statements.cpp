#include <iostream>

void checkAge(int age){
    if (age >= 18){
        std::cout << "You are eligible to vote." << "\n";
    }
    else{
        std::cout << "You are not eligible to vote." << "\n";
    }

}

int main(){

    int age{};
    std::cout << "Enter your age: ";
    std::cin >> age;

    checkAge(age);

    return 0;
}