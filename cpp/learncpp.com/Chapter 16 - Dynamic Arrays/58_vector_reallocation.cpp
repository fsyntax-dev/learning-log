#include <iostream>
#include <vector>

// reallocation - vector out of capacity needs more memor to store new elements

// the process goes -
//                      vector acquires new memory
//                      elements in old memory are copied or moved into new memory - old memor return to system
//                      capacit and length of vector are set to new value

// reallocation - expensive because requires element to be copied
// so avoid unnecessary reallocation

int main(){

    std::vector<int> array;

    array.reserve(3);       // set capacity to 3

    array.push_back(1);     // insert elements
    array.push_back(2);
    array.push_back(3);

    array.push_back(4);     // overflow the capacity - reallocation happens here



    return 0;
}