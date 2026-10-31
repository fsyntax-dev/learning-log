#include <iostream>
using namespace std;


int main() 
{

    int address;

    int *pNum = &address;
    *pNum = 7;

    cout << pNum << "\n";
    cout << &address << "\n";

    return 0;
    
}