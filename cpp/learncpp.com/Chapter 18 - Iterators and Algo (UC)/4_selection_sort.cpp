#include <iostream>
#include <iterator>
#include <utility>

int main(){

    int array[] {8, 5, 9, 3, 6, 4, 2, 7, 1};

    int length {static_cast<int>(std::size(array))};

    for(int startIndex {0}; startIndex < length - 1; ++startIndex){
        
        int smallestIndex {startIndex};                                                 // sI keeps track of smallest index

        for(int currentIndex{startIndex + 1}; currentIndex < length; ++currentIndex){   // cI used to find smallest index
            if(array[currentIndex] < array[smallestIndex]){
                
                smallestIndex = currentIndex;                                           // sI update smallest index
            }

        }

        std::swap(array[startIndex], array[smallestIndex]);
    }


    for(const auto& element : array){
        std::cout << element << "\t";
    }


    return 0;
}