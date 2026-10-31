#include <iostream>
#include <utility>

void selectionSort(int* array, int size, bool (*comparisonFcn)(int, int)){
    if(!array || !comparisonFcn){
        return;
    }
    else{
        for(int startIndex {0}; startIndex < (size - 1); ++startIndex){

            int bestIndex{startIndex};

            for (int currentIndex {startIndex + 1}; currentIndex < size; ++currentIndex){

                if(comparisonFcn(array[bestIndex], array[currentIndex])){

                    bestIndex = currentIndex;
                }            
            }

            std::swap(array[startIndex], array[bestIndex]);
        }   
    }
}

bool ascending(int x, int y){
    return x > y;
}

bool descending(int x, int y){
    return x < y;
}

void print(int* array, int size){
    if(!array){
        return;
    }

    for(int i {0}; i < size; ++i){
        std::cout << array[i] << " ";
    }
}

int main(){

    int array[] {5, 6, 3, 7, 8, 4, 1, 3, 2, 9};

    selectionSort(array, 10, ascending);

    print(array,10);



    return 0;
}