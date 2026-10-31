#include <iostream>

int main() 
{

    int grade;

    std::cout << "Enter your grade: " << "\n";
    std::cin >> grade;

    if(grade >= 60){
        std::cout << "Passed";
    }
    else{
        std::cout << "Failed";
    }

    return 0;
    
}