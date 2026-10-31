#include <iostream>
using namespace std;
/*
Function Template
    + Describe what a function looks like
    + Can be used tp generate as many overloaded functions
      as needed, each using different data types.
*/
// Problem: To many same function for different datatype
int maxNumber(int x, int y){
    return(x > y)? x : y;

}

double maxNumber(double x, double y){
    return(x > y)? x : y;

}


int main() 
{


    cout << maxNumber(6.6, 6.4) << "\n"; 

    return 0;
    
}