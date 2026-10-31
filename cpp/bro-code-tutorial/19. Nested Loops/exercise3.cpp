#include <iostream>
#include <ctime>

int main() 
{
    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: 
            std::cout << "You win 911 GT3 RS" << "\n";
            break;
        case 2:
            std::cout << "You win a mansion" << "\n";
            break;
        case 3:
            std::cout << "You win $10,000,000" << "\n";
            break;
        case 4:
            std::cout << "You win Honda Jazz" << "\n";
            break;
        case 5:
            std::cout << "You win McLaren P1" << "\n";
            break;
    }
    
    return 0;
    
}