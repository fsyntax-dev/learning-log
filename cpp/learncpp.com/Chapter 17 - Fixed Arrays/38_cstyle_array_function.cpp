#include <iostream>

void printElement(const int array[]){   // same as const int*
    std::cout << array[2];
}        

int main(){

    int array[] {1, 2, 3, 4, 5};

    printElement(array);

    return 0;
}