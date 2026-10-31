#include <iostream>

// << extraction operator skip whitespace
// use member function .get(input, max_input)

int main(){

    std::cout << "Please input some sentence: ";
    char sent{};
    while(std::cin.get(sent)){
        std::cout << sent;
    }

    return 0;
}