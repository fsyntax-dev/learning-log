#include <iostream>
#include <array>

// std::array<std::array<type,columns>row>  - kinda backward compare cstyle - columns and rows
// to subscript same with cstyle array[row][column]
// type <type, type> type> it just look a nested type

int main(){

    std::array<std::array<int, 5>, 3> array {{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12,13 ,14, 15}
    }};

    std::cout << array[1][1] << "\n";
    

    return 0;
}