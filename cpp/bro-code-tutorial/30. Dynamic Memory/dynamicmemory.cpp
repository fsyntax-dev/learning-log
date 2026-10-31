#include <iostream>
using namespace std;
/*
Dynamic Memory 
    + Memory that is allocated after the program is already compiled & running.
    + Use the "new" operator to allocate memor in the heap rather than the stack
    
    + Useful when we don't know how much memory we will need.abort
    + Makes our programs more flexible, especially when accepting user input.

*/

int main() 
{

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    cout << "Address: " << pNum  << "\n";
    cout << "Value: "   << *pNum << "\n";

    delete pNum;

    return 0;
    
}