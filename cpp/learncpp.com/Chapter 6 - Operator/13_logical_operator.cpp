#include <iostream>
#include <string>

// !  - not
// && - and
// || - or

// forward declaration
std::string codeInput();
std::string codeChecker(std::string code);

int main(){

    std::string code{codeInput()};
    codeChecker(code);

    return 0;
}

std::string codeInput(){
    std::string code{};
    std::cout << "Please Enter Code: ";
    std::cin >> code;
    return code;
}

std::string codeChecker(std::string code){           
    std::string message {code == "FSY07" || code == "FSY01"                   
    ? "The Code is Valid!"
    : "Invalid Code! Please Try Again."};
    std::cout << message << "\n";
    return code;
}