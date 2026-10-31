#include <iostream>
using namespace std;

/*
For Each Loops
    + Loop that ease the traversal over an iterable dataset

    for(data type variable : variables){
        cout << variable << "\n";
    }
*/


int main() 
{
    string cars[] = {"Toyota", "Honda", "Ford", "BMW", "Mercedes", "Tesla"};

    //standard iteration
    int size = sizeof(cars)/sizeof(string);
    cout << "\n";
    for(int i = 0; i < size; i++){
        cout << cars[i] << "\n";
    }

    cout << "\n";
    //for each loops: another way of standard iteration, less syntax
    for(string car : cars){
        cout << car << "\n";
    }

    return 0;
    
}