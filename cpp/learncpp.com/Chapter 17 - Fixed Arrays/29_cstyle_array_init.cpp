#include <iostream>

int main(){

    int arrayOne[5] {1, 2, 3, 4, 5};        // direct-list          - preffered
    int arrayTwo[5] = {1, 2, 3, 4, 5};      // copy-list

    int arrayThree[5] {};                   // member value init    - preferred
    int arrayFour[5];                       // member default init

    int arrayFive[5] {1, 2, 3, 4, 5, 6};    // initializer > array length - compiler error
    int arraySize[5] {1, 2, 3};             // array [3] [4] are member default init

    auto arraySeven[5];                     // CTAD doesn't work


    return 0;
}