#include <iostream>
#include <iterator> // for std::size

int main(){

    int arrayOne [] {1, 2, 3, 4, 5};

    std::cout << std::size(arrayOne) << "\n";

    return 0;
}

// header <iterator> have std::size()
// since this function is very useful, other header also include it
// like <array> and <vector>

// if using c style array make sure to include iterator header 
// or else it already built in header 