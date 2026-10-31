#include <iostream>
#include <vector>

template <typename T>
void averageArray(const std::vector<T>& array){
    if(array.size() == 0){
        std::cout << "Array is Empty" << "\n";
    }
    else{
        T average {0};
        for(std::size_t index {0}; index < array.size(); ++index){
            average += array[index];
        }
        average /= static_cast<T>(array.size());
        std::cout << "Average: " << average << "\n";
    }
}

int main(){

    std::vector<double> testScoreClassOne {76, 87, 67, 89, 56, 28, 56, 32, 45, 47,78, 67};
    std::vector<double> testScoreClassTwo {};

    averageArray(testScoreClassOne);
    averageArray(testScoreClassTwo);


    return 0;
}