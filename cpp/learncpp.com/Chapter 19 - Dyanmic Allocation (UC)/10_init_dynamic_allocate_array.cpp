#include <iostream>
#include <string>
#include <algorithm>

int main(){

    std::cout << "How many names would you like to enter: ";
    std::size_t length{};
    std::cin >> length;

    std::string* array {new std::string[length]};
    std::size_t index {};

    for(index = 0; index < length; ++index){
        std::cout << "Enter Name #" << index + 1 << ": ";
        std::cin >> array[index];
    }
    std::cout << "\n";

    std::sort(array, array + length);

    std::cout << "Here is your sorted list: " << "\n";
    for(index = 0; index < length; ++ index){
        std::cout << "Name #" << index + 1 << ": " << array[index] << "\n";;        
    }

    return 0;
}