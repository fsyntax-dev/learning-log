#include <iostream>

// Nested Loops = Loop inside another loop

int main() 
{
    std::cout << "April" << "\n";
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 6; j++) {
            std::cout << i * j << "\t";  
        }
        std::cout << "\n"; 
    }
    return 0;

    
}