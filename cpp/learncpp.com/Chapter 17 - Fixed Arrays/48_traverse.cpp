#include <iostream>
#include <iterator>

void traverse(const int array[]){

}

int main(){

    constexpr int array [] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    const int* begin {array};
    const int* end {array + std::size(array)};

    for ( ; begin != end; ++begin){
        std::cout << *begin << " ";
    }

    return 0;
}