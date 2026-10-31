#include <iostream>

// 2D Array
// type array_name[row][columns]

// memory store by sequence of row order

// example of [2][3]
// [0][0] [0][1] [0][2] [1][0] [1][1] [1][2]


int main(){

    int arrayOne[2][3] {
        {1, 2, 3},          // row 0
        {4, 5, 6}           // row 1
    };

    int arrayTwo[3][5]{
        {1, 2},             // row 0 = 1, 2, 0, 0, 0
        {6, 7, 8},          // row 1 = 6, 7, 8, 0, 0
        {11, 12, 13, 14}    // row 2 = 11, 12, 13, 14, 0
    };

    // omit left length (row)   - only omit for left length - can't omit both
    int arrayThree[][5]{
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15}
    };



    return 0;
}