#include <iostream>
using namespace std;


int main() 
{

    int luckyNumber[3] = {1,5,7};

    cout << luckyNumber << "\n";     //address of first element in array by default
    cout << &luckyNumber[0] << "\n"; //access address of first element

    // [] acts like dereference
    cout << luckyNumber[1] << "\n"; 
    // another way to do so (index 0 + number)
    cout << *(luckyNumber + 1) << "\n";

    return 0;
    
}