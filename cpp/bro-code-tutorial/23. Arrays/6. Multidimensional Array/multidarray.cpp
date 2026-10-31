#include <iostream>
using namespace std;
/*

Multidimesional Array (2D Array)

    datatype variable [row] [columns] = {array1, array2, array3}

*/

int main() 
{
    string cars[][3] = {{"Mustang"  , "Escaper", "F-150"},
                        {"Corvette" , "Equinox", "Silverado"},
                        {"Challenger", "Durango", "RAM 1500"}};
    
    // Access value individually
    cout << cars[0][0] << "\n";
    cout << cars[1][0] << "\n";

    //Iteration

    int rows    = sizeof(cars)/sizeof(cars[0]);
    int columns = sizeof(cars[0])/sizeof(cars[0][0]);

    for(int i = 0; i < rows; i++){
        for(int j = 0; i < columns; j++){
            cout << cars[i][j] << "\n";
        }
    }


    return 0;
    
}