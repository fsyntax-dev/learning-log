#include <iostream>

// loops - repeat some code until condition is met
// while statement - while condition true repeat the statement
//      while (condition)
//          statement;


int main(){

    int countNumber{1};
    while(countNumber <= 10){
        std::cout << countNumber << "\n";
        ++countNumber;
    }

    std::cout << "Done" << "\n";
    std::cout << countNumber << "\n";
    
    return 0;
}