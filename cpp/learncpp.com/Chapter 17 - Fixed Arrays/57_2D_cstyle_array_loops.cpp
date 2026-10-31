#include <iostream>
#include <iterator>

// to loop 2D array - need a nested loops

int main(){

    int array[3][5] {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
    };

    // For Loops
    for(std::size_t row{0}; row < std::size(array); ++row){                 // outer loops
        for(std::size_t column{0}; column < std::size(array[0]); ++column){ // inner loops
            std::cout << array[row][column] << "\t";
        }
        std::cout << "\n";
    }

    std::cout << "\n";

    // Range Based For Loops
    for(const auto& row : array){                                           // get row in array
        for(const auto& column : row){                                      // get column in row
            std::cout << column << "\t";
        }
        std::cout << "\n";
    }

    return 0;
}