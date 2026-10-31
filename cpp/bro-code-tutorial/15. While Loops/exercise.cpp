#include <iostream>


int main() 
{
    int nums;

    std::cout << "Enter numbers: ";
    std::cin >> nums;

    while(nums != 1){
        std::cout << "False" << "\n";
        std::cout << "Enter numbers: ";
        std::cin >> nums;

    }

    std::cout << "Number is " << nums << "\n";

    return 0;
    
}