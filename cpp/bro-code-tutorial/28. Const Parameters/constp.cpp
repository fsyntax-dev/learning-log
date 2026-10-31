#include <iostream>
using namespace std;

/*
Const Parameter
    + Parameter that is effectively read only
    + Code is more secure & conveys intent
    + Useful for references and pointers
*/

void printInfo(const string name, const int age){
    cout << "\n";
    cout << name << "\n";
    cout << age << "\n";

}


int main() 
{
    string name = "FirstName";
    int age = 24;

    printInfo(name, age);
    return 0;
    
}