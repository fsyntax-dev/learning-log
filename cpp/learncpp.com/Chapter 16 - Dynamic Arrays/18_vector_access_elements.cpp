#include <iostream>
#include <vector>

// .at() - member function same purpose as operator[]
// array_name.at(index)

int main(){

    std::vector<int> arrayA {1,2,3,4,5};

    std::cout << arrayA.at(3) << "\n";;

    std::cout << arrayA.at(10) << "\n";     // out of bound - it will throw exceptions

    return 0;
}