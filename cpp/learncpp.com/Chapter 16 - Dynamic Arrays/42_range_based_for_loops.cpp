#include <iostream>
#include <vector>

int main(){

    std::vector <int> array {1, 2, 3, 4, 5, 6, 7 ,8, 9, 10};

    for(std::size_t index {0}; index < array.size(); ++index){      // standard for loops
        std::cout << array[index] << " ";
    }
    
    std::cout << "\n";

    for(int number : array){                                        // range based for loops
        std::cout << number << " ";
    }

    return 0;
}