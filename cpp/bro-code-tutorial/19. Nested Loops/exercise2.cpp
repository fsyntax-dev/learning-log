#include <iostream>


int main() 
{

    srand(time(NULL));

    int nums1 = (rand() % 6) + 1;
    int nums2 = (rand() % 6) + 1;
    int nums3 = (rand() % 6) + 1;

    std::cout << "Dice 1: " << nums1 << "\n";
    std::cout << "Dice 2: " << nums2 << "\n";
    std::cout << "Dice 3: " << nums3 << "\n";

    return 0;
    
}