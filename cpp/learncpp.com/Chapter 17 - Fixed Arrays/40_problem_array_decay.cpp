#include <iostream>

// not having length information - subscript invalid index

void printElement(const int array[]){
    std::cout << array[3] << "\n";
}

int main(){

    int arrayOne [] {1, 2, 3, 4, 5};

    printElement(arrayOne);

    int arrayTwo [] {1, 2};

    printElement(arrayTwo);


    return 0;
}