#include <iostream>

int main(){

    std::string password{};

    std::cout << "Nuclear Launch System" << "\n";
    std::cout << "Enter launching code: ";
    std::getline(std::cin, password);
    
    if (password != "admin123"){
        std::cout << "Access Denied!" << "\n";
        std::exit(0);
    }
    std::cout << "Nuclear Launching..." << "\n";

    
    return 0;
}