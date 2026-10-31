#include <iostream>
#include <vector>

std::size_t input(){
    std::size_t input {};
    std::cout << "Enter an index: ";
    std::cin >> input;
    return input;
}

void accessArray(const std::size_t& input){
    std::vector<int> secretArray {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    if(input >= secretArray.size()){
        std::cout << "Index not Available" << "\n";
    }
    else{
        std::cout << "Index of " << input << " is " << secretArray[input] << "\n";
    }
}

int main(){

    accessArray(input());

    return 0;
}