#include <iostream>
#include <iterator>

// limit 10 but takes 9 because 1 is reserve to null terminator 

int main(){

    std::cout << "Enter some sentences: ";
    char sent[10]{};
    (std::cin.get(sent, std::size(sent)));
    std::cout << sent << "\n";
    std::cout << std::cin.gcount();


    return 0;
}