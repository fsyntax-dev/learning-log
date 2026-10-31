#include <iostream>
using namespace std;


int main() 
{
    char *pGrade = NULL;
    int size;

    cout << "How many grades to enter in?: ";
    cin >> size;

    pGrade = new char[size];

    for(int i = 0; i < size; i++){
        cout << "Enter grade #" << i + 1 << ": ";
        cin >> pGrade[i];
    }

    for(int i = 0; i < size; i++){
        cout << pGrade[i] << ": ";

    }

    delete[] pGrade;
    return 0;
    
}