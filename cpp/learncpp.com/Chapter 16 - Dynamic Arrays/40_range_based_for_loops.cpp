#include <iostream>
#include <vector>

// range based for loops
/*

    for (type element_declaration : array_object){
        statement;
    }

*/

// element declaration should have the same type as array elements

int main(){

    std::vector fib {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};

    for(int num : fib){
        std::cout << num << " ";
    }


}