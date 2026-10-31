#include <iostream>
using namespace std;
// pointer = special variable that holds address
// previously pointer strict to same datatype

// void pointer = variable that holds address of other datatype
//              = cant dereference

void printNumber(int *pNumber){
    cout << *pNumber << "\n";
}

int main() 
{
    int number = 5;

    printNumber(&number);


    return 0;
    
}