#include <iostream>
using namespace std;

// Iterate 2D array
// Calculate sizeof() rows and columns
// Use a nested for loop to iterate through rows and columns
// Output array[row][column]


int main() 
{
    string cars[3][3] = {{"Porsche"     , "911"     , "Cayenne" },
                         {"McLaren"     , "P1"      , "720S"    },
                         {"Rolls-Royce" , "Phantom" , "Cullinan"}};


    int row     = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    int counter = 1;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < columns; j++){
            cout << counter++ << ". " << cars[i][j] << "\n";
        }
    }

    return 0;
    
}