#include <iostream>
#include <array>

// brace elision - extra baces are allowed and ignore in aggregate initialization

int main(){

    constexpr std::array<int, 5> arrayOne{1, 2, 3, 4, 5};       // single braces

    constexpr std::array<int, 5> arrayTwo {{1, 2, 3, 4, 5}};    // double braces


    return 0;
}