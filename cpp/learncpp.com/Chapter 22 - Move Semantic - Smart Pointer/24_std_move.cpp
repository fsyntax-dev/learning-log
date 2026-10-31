#include <iostream>
#include <utility>
#include <vector>

template <typename T>
void printVec(std::vector<T>& vec){
    for(std::size_t i {0}; i < vec.size(); ++i){
        std::cout << i+1 << ": " << vec[i] << "\n";
    }
}

template <typename T>
void swapVec(std::vector<T>& vec){
    T temp = std::move(vec[0]);
    vec[0] = std::move(vec[1]);
    vec[1] = std::move(temp);

    std::cout << "Value Swapped" << "\n";
}

int main(){

    std::vector<int> vec{};

    vec.push_back(10);
    vec.push_back(15);

    printVec(vec);

    swapVec(vec);

    printVec(vec);


    return 0;
}