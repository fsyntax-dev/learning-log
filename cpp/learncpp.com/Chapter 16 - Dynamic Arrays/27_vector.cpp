#include <iostream>
#include <vector>

template <typename T>
void printElement(const std::vector<T>& array, std::size_t index){
    if(index > array.size()){
        std::cout << "Invalid Index" << "\n";
    }
    else{
        std::cout << "Element: " << array[index] << "\n";
    }
}

int main(){

    std::vector<int> arrayOne{1, 2, 3, 4, 5};

    printElement(arrayOne, 4);
    printElement(arrayOne, 6);


    return 0;
}