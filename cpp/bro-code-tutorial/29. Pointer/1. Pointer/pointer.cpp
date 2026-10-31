#include <iostream>
using namespace std;
// variable = store value
// pointer  = store address
// &variable = to access address

int main() 
{   
    //store value
    int a = 5;          
    cout << "Value: " << a << "\n";

    cout << "\n";

    //access address
    int b = 5;          
    cout << "Address: "<< &b << "\n";

    return 0;
    
}