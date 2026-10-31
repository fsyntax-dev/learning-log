#include <iostream>

template <typename T>
T average(const T* myArray, std::size_t numValues){
    T sum{};
    for(std::size_t i {0}; i < numValues; ++i){
        sum += myArray[i];
    }

    sum /= numValues;
    return sum;
}

int main(){

    int myArray[] {1,2,3,4,5,6,7,8,9,10};
    std::cout << average(myArray, std::size(myArray));

    
    return 0;
}