#include <iostream>
#include <random> // for mersenne twister

// std::mt19937 for 32 bit unsigned int
// std::mt19937_64 for 64 bit unsigned int

int main(){

    std::mt19937 mt{};

    for(int count{1}; count <= 10; ++count){
        std::cout << count << ". "<< mt() << "\n";
    }

    return 0;
}