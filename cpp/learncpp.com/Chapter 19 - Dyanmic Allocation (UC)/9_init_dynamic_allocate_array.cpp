#include <iostream>
#include <string>
#include <algorithm>

int main(){
    
    std::cout << "How many names would you like to enter: ";
    std::size_t length{};
    std::cin >> length;

    std::string* array {new std::string[length]};

    for(int i{0}; i < length; ++i){
        std::cout << "Enter Name #" << i + 1 << ": ";
        std::cin >> array[i];
    }
    std::cout << "\n";

    std::sort(array, array + length);

    for(int j {0}; j < length; ++j){
        std::cout << "Name #" << j + 1 << ": " << array[j] << "\n";
    }
    

    return 0;
}