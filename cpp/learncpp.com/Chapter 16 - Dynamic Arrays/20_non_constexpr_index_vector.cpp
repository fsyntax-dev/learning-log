#include <iostream>
#include <vector>

int main(){

    std::vector arrayOne {1, 2, 3, 4, 5};

    std::size_t index{3};                   // declared a type of std::size_t
    std::cout << arrayOne[index] << "\n";   // no implicit conversion require here

    int indexA {4};
    std::cout << arrayOne[indexA] << "\n";  // index implicitly converted to std::size_t
                                            // narrowing conversion

    return 0;
}