#include <iostream>
using namespace std;

int main() 
{

    int num = 5;
    int *pNum = &num;
    //stored address

    cout << pNum << "\n";   //access address

    cout << *pNum << "\n";  //access value

    *pNum = 10; //overide value by address

    cout << *pNum << "\n";  //access value by deference
    cout << num << "\n";    //access value by variable

    return 0;
    
}