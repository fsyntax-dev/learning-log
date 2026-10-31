#include <iostream>
#include <vector>

//auto vs auto& vs const auto&

int main(){

    std::vector<int> array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // auto - copy each element - copy and allow modification
    // for cheap to copy types
    for(auto element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";


    // reference to original element - avoid copying and allow modification
    // want to modify elements
    for(auto& element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";


    // const reference to original element - avoid copying and  didn't allow modification
    // expensive to copy types
    for(const auto& element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";

    return 0;
}