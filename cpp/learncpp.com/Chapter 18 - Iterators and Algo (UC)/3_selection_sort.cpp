#include <iostream>
#include <utility>
#include <iterator>

int main(){

    int array[] {90,20,30,50,60,80,10};

    int length {static_cast<int>(std::size(array))};

    for(int startIndex {0}; startIndex < length - 1; ++startIndex){

        int smallestIndex{startIndex};

        for(int currentIndex {startIndex + 1}; currentIndex < length; ++currentIndex){

            if(array[currentIndex] < array[smallestIndex]){     // if found index with smallest element
                smallestIndex = currentIndex;                   // then update current index
            }

        }
        std::swap(array[startIndex], array[smallestIndex]);     // then swap

    }

    for(const auto& element : array){
        std::cout << element << "\t";
    }

    return 0;
}