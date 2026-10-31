#include <iostream>
using namespace std;
/*
Enums = enumeration
        user-defined data type that consists of paired name-integer constants
        GOOD if ou have a set of potential options
*/
enum Day {Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3, Thursday = 4, Friday = 5, Saturday = 6};


int main() 
{
    Day today = Sunday;

    
    switch (today) {
        case Sunday:
            cout << "Today is Sunday" << "\n";
            break;
        case Monday:
            cout << "Today is Monday" << "\n";
            break;
        case Tuesday:
            cout << "Today is Tuesday" << "\n";
            break;
        case Wednesday:
            cout << "Today is Wednesday" << "\n";
            break;
        case Thursday:
            cout << "Today is Thursday" << "\n";
            break;
        case Friday:
            cout << "Today is Friday" << "\n";
            break;
        case Saturday:
            cout << "Today is Saturday" << "\n";
            break;
    }

    return 0;
    
}