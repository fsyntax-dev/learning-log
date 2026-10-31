#include <iostream>
using namespace std;

/*
Sizeof Operator
    + sizeof()
    + Determines the size in bytes of a:
                                            1. Variables
                                            2. Data Tyes
                                            3. Class
                                            4. Objects
*/


int main() 
{
    string name = "Capital";
    float gpa = 2.5;
    char grade = 'A';
    bool millionaire = true;

    string cars[] = {"Porsche", "Mitsubishi", "McLaren"};

    cout << "\n";

    cout << sizeof(name)        << " bytes" << "\n";
    cout << sizeof(gpa)         << " bytes" << "\n";
    cout << sizeof(grade)       << " bytes" << "\n";
    cout << sizeof(millionaire) << " bytes" << "\n";

    cout << "\n";

    cout << sizeof(cars) << " bytes" << "\n";
    cout << sizeof(cars[1]) << " bytes" << "\n";
    cout << sizeof(cars)/sizeof(string) << " elements" << "\n";
    
    return 0;
    
}