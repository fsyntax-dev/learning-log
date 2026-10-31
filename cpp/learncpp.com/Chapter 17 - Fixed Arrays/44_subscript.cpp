#include <iostream>
#include <iterator>

int main(){

    int array [] {1, 2, 3, 4, 5};

    for(int i = 0; i < std::size(array); ++i){
        std::cout << *((&array[0]) + (i)) << " : " << array[i] << "\n"; 
    }


    return 0;
}