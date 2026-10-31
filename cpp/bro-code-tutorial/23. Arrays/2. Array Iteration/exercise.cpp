#include <iostream>
using namespace std;
/*
Array Iteration
    + Iterate an array using for loops
    for(int i = 0; i < number of list in array; i++){
        std::cout variable[i] << "\n";
    }
*/

int main() 
{

    string students[] = {"Alex", "Smith", "John", "Doe"};
    cout << "\n";
    cout << "List array 1 by 1" <<"\n";
    cout << students[0] <<"\n";
    cout << students[1] <<"\n";
    cout << students[2] <<"\n";
    cout << students[3] <<"\n";

    cout << "\n";
    cout << "List array with iteration"<<"\n";
    int size = sizeof(students) / sizeof(string);

    for(int i = 0; i < size; i++){
        cout << students[i] << "\n";
    }
    

    return 0;
    
} 