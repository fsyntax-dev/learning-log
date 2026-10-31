#include <iostream>
#include <vector>

using size = std::size_t;

int main(){

    std::vector <int> array{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for(size index {0}; index <= array.size(); ++index){    // <= access something out of bound array, will return junk
        std::cout << array[index] << "\n";
    }
    
    

    return 0;
}