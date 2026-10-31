#include <iostream>
using namespace std;

void prinLetter(char *pLetter){
    cout << *pLetter << "\n";
}

void printAny(void *ptr, char type){
    switch(type){
        case 'i' : cout << *((int*)ptr)  << "\n";
            break;
        case 'c' : cout << *((char*)ptr) << "\n";
            break;
    }
}

int main() 
{
    int number = 5;
    char letter = 'A';

    printAny(&number, 'i');
    printAny(&letter, 'c');

    return 0;
    
}