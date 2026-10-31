#include <iostream>
#include <array>
#include <algorithm>
#include <functional>

int main(){

    std::array array {10, 60, 50, 30, 80, 20, 90, 40};

    // greater has it own type in header <functional>
    // greater isn't callable function 
    std::sort(array.begin(), array.end(), std::greater{});

}