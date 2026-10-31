#include <iostream>
#include <vector>

int main(){

    std::vector array{1, 2, 3, 4, 5};

    for(std::vector<int>::size_type index{0}; index < array.size(); ++index){
        std::cout << array[index] << " ";
    }

    return 0;
}