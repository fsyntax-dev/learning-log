#include <iostream>
#include <string>

std::string sameName{"Global"};

int main(){

    std::string sameName {"Local"};

    std::cout << sameName << "\n";
    std::cout << ::sameName << "\n";

    return 0;
}