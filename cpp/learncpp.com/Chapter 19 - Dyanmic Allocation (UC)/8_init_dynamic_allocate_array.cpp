#include <iostream>

// to initiallize dynamicallly allocated array
// int* array {new int [length]}

int main(){

    int* array {new int [5]{1, 2, 3, 4, 5}};

    std::cout << array[1] << "\n";

    delete[] array;
    array = nullptr;

    std::cout << array[1] << "\n";


    return 0;
}