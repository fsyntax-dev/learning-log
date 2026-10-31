#include <iostream>
#include <algorithm>
#include <array>

// functionality in <algorithm> has 3 categories
//      inspector   - to view element in container                          - searching and counting
//      mutator     - to modify element in container                        - sorting and shuffling
//      facilitator - to generate result based on value of element member   - mutiply etc

// std::find(first_iterator, last_iterator, value) { return pointer}

int main(){

    std::array array {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};

    int find {};
    int replace {};

    std::cout << "Enter value to search and repalce with: " << "\n";

    std::cout << "Find\t: ";
    std::cin >> find;
    std::cout << "Replace\t: ";
    std::cin >> replace;


    int* found {std::find(array.begin(), array.end(), find)};

    if(found == array.end()){
        std::cout << "Couldn't found " << find << " in container" << "\n";
    }
    else{
        *found = replace;
        for(const auto& element : array){
            std::cout << element << "\t"; 
        }
    }

    



    return 0;
}