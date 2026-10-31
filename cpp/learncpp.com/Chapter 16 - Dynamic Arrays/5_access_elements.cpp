#include <iostream>
#include <vector>

// subscript operator - operator[] to access element individually

// operator[] expect a type which known as std::size_t
// operator[std::size_t] - to access index it receive std::size_t
// if we pass int, it will implicitly convert to std::size_t

int main(){

    std::vector<int> valueA {1, 2, 3, 4, 5};

    std::cout << "Index 0: " <<valueA[0] << "\n";
    std::cout << "Index 1: " <<valueA[1] << "\n";
    std::cout << "Index 2: " <<valueA[2] << "\n";

    std::cout << valueA[0] + valueA[1] << "\n";

    return 0;
}