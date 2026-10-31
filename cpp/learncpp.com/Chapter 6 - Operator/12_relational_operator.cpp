#include <iostream>
#include <string>

std::string codeInput(){
    std::string code{};
    std::cout << "Please Enter Code: ";
    std::cin >> code;
    return code;
}

std::string codeChecker(std::string code){              // Standard If Else
    if(code == "VK67"){                                     
        std::cout << "The Code is Valid!" << "\n";
    }
    else{
        std::cout << "Invalid Code! Please Try Again.";
    }
    return code;
}

std::string codeCheckerTernary(std::string code){       // Ternary Operator ?:
    std::string message {code == "VK67"                     
    ? "The Code is Valid!"
    : "Invalid Code! Please Try Again."};
    std::cout << message << "\n";
    return code;
}

int main(){

    std::string code {codeInput()};
    codeCheckerTernary(code);

    return 0;
}