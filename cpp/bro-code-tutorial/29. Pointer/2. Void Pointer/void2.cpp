#include <iostream>
using namespace std;

void prinLetter(char *pLetter){
    cout << *pLetter << "\n";
}

void printDouble(double *pDouble){
    cout << *pDouble << "\n";
}

int main() 
{
    char letter = 'A';
    double number = 4.20;

    prinLetter(&letter);
    printDouble(&number);

    return 0;
    
}