#include <iostream>

void printElement(const int array[], std::size_t length){
    if(length < 3){
        std::cout << "Array too short" << "\n";
    }
    else{
        std::cout << "Index 3: " << array[3];
    }
}

int main(){

    int arrayOne [] {1, 2};
    int arrayTwo [] {1, 2,3, 4, 5};

    printElement(arrayOne, std::size(arrayOne));    // if the wrong length of array - malfunction
    printElement(arrayTwo, std::size(arrayTwo));    

    return 0;
}

// BEST PRACTICE
// c-style array should be avoided
//      std::string_view    - read only strings
//      std::string         - modifiable strings
//      std::array          - non-global constexpr array
//      std::vector         - non constexpr array