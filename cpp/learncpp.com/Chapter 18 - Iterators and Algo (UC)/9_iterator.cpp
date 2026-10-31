#include <iostream>
#include <array>    // already included <iterator>

int main(){

    std::array array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* begin {array.begin()};
    int* end {array.end()};

    for(int* ptr {begin}; ptr != end; ++ptr){
        std::cout << *ptr << "\n";
    }


    return 0;
}