#include <iostream>

// initialize       - give variable a value when it created
// initialize list  - give variable set of value list

int main(){

    int numList[] {1, 2, 3, 4, 5};  // {1, 2, 3, 4, 5} is initializer list


    for(auto i : numList){
        std::cout << i << " ";
    }
 
    return 0;
}