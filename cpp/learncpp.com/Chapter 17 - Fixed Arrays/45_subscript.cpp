#include <iostream>

int main(){

    int array[] {1, 2, 3, 4, 5};

    std::cout << *((&array[2]) + (1)) << "\n";

    return 0;
}