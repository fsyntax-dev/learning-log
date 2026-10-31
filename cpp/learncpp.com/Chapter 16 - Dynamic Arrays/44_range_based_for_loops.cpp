#include <iostream>
#include <vector>

template <typename T>
void loopArray(const std::vector<T>& array){
    for(T num : array){
        std::cout << num << " " ;
    }
    std::cout << "\n";
}

int main(){

    std::vector<int> arrayOne {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::vector<double> arrayTwo {1.1, 1.2, 1.3, 1.4, 1.5};
    
    loopArray(arrayOne);
    loopArray(arrayTwo);

    return 0;
}