#include <iostream>
#include <array>
#include <algorithm>


int main(){

    std::array array {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int find {};
    std::cout << "Find Element\t: ";
    std::cin >> find;

    int* found{std::find(array.begin(), array.end(), find)};

    if(found == array.end()){
        std::cout << "Couldn't find element " << find << '\n';
    }
    else{
        int replace{};
        std::cout << "Replace Element\t: ";
        std::cin >> replace;

        *found = replace;

        for(const auto& element : array){
            std::cout << element << "\t";
        }

    }


    return 0;
}