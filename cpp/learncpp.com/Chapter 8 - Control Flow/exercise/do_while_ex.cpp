#include <iostream>

int main(){

    int option{};

    do {
        std::cout << "Drink 1" << "\n";
        std::cout << "Drink 2" << "\n";
        std::cout << "Drink 3" << "\n";
        std::cout << "Drink 4" << "\n";
        std::cout << "Drink 5" << "\n";
        std::cout << "Enter your choice (1 to 5): ";
        std::cin >> option;

    } while(option < 1 || option > 5);

    std::cout << "You selected: " << option << "\n";

    return 0;
}
