#include <iostream>
#include <vector>

// indexing std::vector with constexpr signed int
// compiler implicitly convert type to std::size_t

int main(){

    std::vector<int> valueA {1, 2, 3, 4, 5};

    std::cout << valueA[3] << "\n";             // using signed int[3] to index vector
                                                // operator[] expects an unsigned index
                                                // implicitly convert int to std::size_t

    constexpr int index {3};                    // constexpr signed int 
    std::cout << valueA[index] << "\n";         // constexpr index implicitly convert to
                                                // std::size_t                                            


    return 0;
}