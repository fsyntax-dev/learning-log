#include <iostream>
#include <utility>
#include <vector>

template <typename T>
void swapVal(std::vector<T>& vec, const std::size_t& indexOne, const std::size_t& indexTwo){
    if(indexOne <= vec.size() || indexTwo >= vec.size()){
        std::cout << "Invalid Index" << "\n";
    }
    else{
        T temp  = std::move(vec[indexOne]);
        vec[indexOne] = std::move(vec[indexTwo]);
        vec[indexTwo] = std::move(temp);

        std::cout << "Value Swapped" << "\n";
    }
}

template <typename T>
void printVal(std::vector<T>& vec){
    for(std::size_t i {0}; i < vec.size(); ++i){
        std::cout << vec[i] << " ";
    }
    std::cout << "\n";
}

int main(){

    std::vector<int> vec {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printVal(vec);

    swapVal(vec, 0, 5);

    printVal(vec);


    return 0;
}