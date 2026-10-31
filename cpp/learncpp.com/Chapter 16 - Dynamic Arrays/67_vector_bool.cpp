#include <iostream>
#include <vector>

// std::vector<bool> tradeoff
// expensive memory
// performance depend on implementation
// not really a vector

// std::vector<bool> should be avoided
//      use constexpr std::bitset, std::vector<char>, danmic bitset

int main(){

    std::vector<bool> array {true, false, true, true, false};

    std::cout << std::boolalpha;
    for(auto element : array){
        std::cout << element << " ";
    }
    std::cout << "\n";

    std::cout  << sizeof(array) << "\n";

    
    return 0;
}