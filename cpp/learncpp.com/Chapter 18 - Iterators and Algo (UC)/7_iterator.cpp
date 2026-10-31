#include <iostream>
#include <array>    

// pointer iterator

int main(){

    std::array array{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* begin {array.data()};          // same as &array[0]
    int* end {begin + array.size()};    // pointer arithmetic

    for(int* ptr {begin}; ptr != end; ++ptr){
        std::cout << *ptr << "\t";
    }


    return 0;
}