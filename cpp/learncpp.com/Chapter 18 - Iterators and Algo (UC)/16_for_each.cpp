#include <iostream>
#include <array>
#include <algorithm>

// std::for_each - go through every element in container and do something to each one
//               - for each element apply custom function

void doubleNum(int& num){
    num *= 2;
}

int main(){

    std::array array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::for_each(array.begin() + 5, array.end(), doubleNum);

    for(const auto& element : array){
        std::cout << element << " ";
    }

    return 0;
}