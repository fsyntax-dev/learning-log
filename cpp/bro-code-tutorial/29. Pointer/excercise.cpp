#include <iostream>
using namespace std;

int main() 
{
    string name = "First";
    int age     = 24;

    //Pointer
    string *pName = &name;
    int *pAge   = &age;


    //Address
    cout << pName << "\n";
    cout << pAge << "\n";


    //Dereference
    cout << pName << "\n";
    cout << pAge << "\n";


    return 0;
    
}