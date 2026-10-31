#include <iostream>
using namespace std;

/*
Memory Address 
    + Location in memory where data is stored
    + Can be accessed with & 
    + & known as address-of operator
*/


int main() 
{
    string name = "First";
    int age     = 24;
    bool rich   = true;

    cout << &name << "\n";
    cout << &age << "\n";
    cout << &rich << "\n";

    return 0;   
}