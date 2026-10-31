#include <iostream>
#include <array>
#include <algorithm>

// std::sort(begin, end)
// std::sort(begin, end, condition)

bool greater(int x, int y){
    return (x > y);
}

int main(){

    std::array array { 13, 90, 99, 5, 40, 80 };

    std::sort(array.begin(), array.end(), greater);     // function without () - function pointer

    for(const auto& element : array){
        std::cout << element << " ";
    }

    return 0;
}