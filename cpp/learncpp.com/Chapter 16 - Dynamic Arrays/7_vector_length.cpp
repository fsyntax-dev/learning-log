#include <iostream>
#include <vector>

// consider the case where we expect a vector has it expected length
// must be call as direct initialization ()


int main(){
    // placheolder 0 to make array has length 10 - bad practice
    std::vector<int> contA {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    // std::vector has constructor
    // explicit std::vector<T>(std::size_t)
    // this constructor takes size_t to form the length
    // the element is default to 0
    std::vector<int> contB (10);
    std::cout <<contB.size() << "\n";
    std::cout <<contB[0] << "\n";


    // length 10 filled with element 1
    std::vector<int> contC (10, 1);     
    std::cout << contC[0] << "\n";


    return 0;
}