#include <iostream>

// if (condition)
//      true_statement;
// else
//      false_statement;


int main(){

    int grade{};
    std::cout << "Enter your grade: ";
    std::cin >> grade;

    if(grade < 40){
        std::cout << "Failed!" << "\n";
    }
    else{
        std::cout << "Passed!" << "\n";
    }

    return 0;
}