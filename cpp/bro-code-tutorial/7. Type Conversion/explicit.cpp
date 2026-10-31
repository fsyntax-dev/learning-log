#include <iostream>

using std::cout;
using std::endl;
using std::string;

int main() 
{
    int myInt = 65;             // Integer value
    char myChar = (char)myInt;  // Explicit conversion (int → char)

    cout << myChar << endl; 

    return 0;
}

// Explicit conversion must specify datatype in parentheses 