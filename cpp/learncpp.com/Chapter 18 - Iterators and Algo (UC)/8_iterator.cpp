#include <iostream>
#include <iterator> // std::begin and std::end

int main(){

    int array[] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int* begin {std::begin(array)};
    int* end {std::end(array)};

    for(int* ptr {begin}; ptr != end; ++ptr){
        std::cout << *ptr << "\t";
    }

    return 0;
}