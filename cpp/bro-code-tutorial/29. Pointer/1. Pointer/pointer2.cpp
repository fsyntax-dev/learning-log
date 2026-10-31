#include <iostream>
using namespace std;
// & to get address
// * to get value

int main() 
{
    //variable holding value
    int num = 5;

    //access address
    cout << &num << "\n";

    //variable holding address
    int *pNum = &num;

    //access address
    cout << pNum << "\n";

    //convert back to value
    //access value
    cout << *pNum << "\n";

    return 0;
    
}