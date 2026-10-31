#include <iostream>
#include <iterator>

int main(){

    constexpr int numRows{10};
    constexpr int numCols{10};

    int array[numRows][numCols]{};

    for(std::size_t row{1}; row < numRows; ++row){
        for(std::size_t col{1}; col < numCols; ++col){
            array[row][col] = static_cast<int>(row*col);
            std::cout << array[row][col] << "\t";
        }
        std::cout << "\n";
    }
    

    return 0;
}