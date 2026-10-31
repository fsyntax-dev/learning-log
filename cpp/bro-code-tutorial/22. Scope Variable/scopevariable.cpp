#include <iostream>
using namespace std;

/*
Scope Variable
    + Local Variable    = Declared inside a function or block {}
    + Global Variable   = Declared outside of all functions

*/

int globalVar = 10;

void myFunction(){
    int localVar = 5;
    cout << "Local Function: " << localVar << "\n";
}

// globalVar exists globally
// localVar exists locally in myFunction()

int main() 
{
    cout << "Global Variable: " << globalVar << "\n";

    myFunction();

    return 0;
    
}