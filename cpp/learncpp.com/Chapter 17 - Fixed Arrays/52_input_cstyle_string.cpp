#include <iostream>
#include <iterator>
int main(){

    char str[50] {};

    std::cout << "Enter full name: ";
    std::cin.getline(str, std::size_t(str));

    std::cout << str << "\n";

    return 0;
}