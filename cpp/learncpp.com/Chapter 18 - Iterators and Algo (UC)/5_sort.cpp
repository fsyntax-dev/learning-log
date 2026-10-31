#include <algorithm>    // std::sort
#include <iostream>  


int main(){

    int array[] {90, 40, 30, 50, 70, 10, 80, 20};

    std::sort(std::begin(array), std::end(array));

    for(const auto& element : array){
        std::cout << element << "\t";
    }


    return 0;
}
