#include <array>
#include <iostream>

// iterator - object designed to traverse through container (element in array/ char in string)

void newLine(){ std::cout << "\n"; }

int main(){

    std::array array{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::size_t length {array.size()};

    std::size_t index {0};

    while(index < length){                                              // while loops
        std::cout << array[index] << "\t";
        ++index;
    }
    
    newLine();

    for(index = 0; index < length; ++index){                            // for loops
        std::cout << array[index] << "\t";
    }

    newLine();

    for(int* ptr {&array[0]}; ptr != (&array[0] + length); ++ptr){      // for loops with pointer
        std::cout << *ptr << "\t";
    }

    newLine();

    for(const auto& element : array){                                   // range-based for loops
        std::cout << element << "\t";
    }


    return 0;
}