#include <iostream>
using namespace std;
// enums is enumeration to define a set of named integer constants

enum statusCode {Available , NotAvailable, Error, NotFound};

int main() 
{
    statusCode response = Available;

    cout << "Response code: " << response << "\n";

    return 0;
    
}