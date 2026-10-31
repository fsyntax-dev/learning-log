#include <iostream>
#include <vector>

// operator [] - doesnt do bounds checking
//             - bounds checking - go outside the length of array

int main(){

    std::vector<int> arrayA {1,2,3,4,5};
    std::cout << arrayA[2] << "\n";         // prior lesson - access element with []
    std::cout << arrayA [10] << "\n";       // undefined behaviour - out of bound index 10 doesn't exist   


    return 0;
}