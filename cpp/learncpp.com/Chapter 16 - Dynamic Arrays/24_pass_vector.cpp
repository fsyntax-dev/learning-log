#include <iostream>
#include <vector>

void passByReference(const std::vector& array){     // CTAD can't be use to infer function paramters
    std::cout << array[1] << "\n";                  // CTAD is only for constructing object
}                                                   // Not deduce function paramter types

int main(){

    std::vector arrayOne {1, 2 ,3 ,4, 5};           // Constructing object using CTAD to deduce


    return 0;
}