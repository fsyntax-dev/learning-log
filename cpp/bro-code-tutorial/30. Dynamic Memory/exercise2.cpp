#include <iostream>
using namespace std;

int main() 
{
    int *p = new int;
    *p = 42;

    cout << "Value: " << *p << "\n";

    delete p;
    p = nullptr;

    return 0;
    
}