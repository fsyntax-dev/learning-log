#include <iostream>
using namespace std;
/*
Pointers
    + Variable that stores a memory address of another variable
    + Sometimes its easier to work with an address

& = Address-of Operator - Get the address
* = Deference Operator  - Convert address to value 

*/

int main() 
{
    int num = 10;
    int *pNum = &num;
    
    // Actual value of 'num'
    cout << "Value of num: " << num << "\n";  

    cout << "Address of num: " << &num << "\n";  // Memory address of 'num'
    cout << "Pointer pNum stores: " << pNum << "\n";  // Address stored in 'pNum' (should match &num)
    
    // Dereference 'pNum' to get the value stored at that address
    cout << "Value at pointer pNum: " << *pNum << "\n";  
    return 0;
    
}