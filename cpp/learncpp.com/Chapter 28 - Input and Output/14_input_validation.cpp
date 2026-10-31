#include <iostream>
#include <string>
#include <cctype> // to check character

int main(){

    std::string password{};
    std::cout << "Enter the password: ";
    std::cin >> password;

    bool hasDigit{false};

    for(char input : password){
        if(std::isdigit(input)){
            hasDigit = true;
            break;
        }
    }

    if(hasDigit){
        std::cout << "Strong" << "\n";
    }
    else{
        std::cout << "Weak" << "\n";
    }



    return 0;
}