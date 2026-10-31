#include <iostream>

int main(){

    std::cout << "Enter Number: ";
    int x{};
    std::cin >> x;

    try{
        if(x < 0){
            throw "Can't take less than negative";
        }
        else{
            std::cout << x * 2 << "\n";
        }
    }

    catch(const char* exception){
        std::cerr << "Error: " << exception << "\n"; 
    }

    std::cout << "Then the program continue as usual" << "\n";

    return 0;
}