#include <iostream>

int main() {
    int num{};

    do {
        std::cout << "Option 1" << "\n";
        std::cout << "Option 2" << "\n";
        std::cout << "Option 3" << "\n";
        std::cout << "Option 4" << "\n";
        std::cout << "Option 5" << "\n";
        std::cout << "Select an Option (1-5): ";
        std::cin >> num;
    } 
    while (num < 1 || num > 5);

    std::cout << "You Selected: " << num << "\n";

    
    return 0;
}
 