#include <iostream>

// aliases can be used as parameter types.
//
// for function overloading:
//   - cliases are not distinct types, which means
//     they are just different names for the same type.

//   - cannot create overloads using only aliases for the same type,
//     because the compiler sees them as the same type.


using age = int;
using height = double;

void userAge(age x){            // this is okay
    std::cout << x << "\n";
}

void userHeight(height x){      // this is okay
    std::cout << x << "\n";
}

void userHeight(double x){      // this isn't okay
    std::cout << x << "\n";     // redundance type
}                               // double used twice 
                                // choose only 1: alias or just plain type

int main(){


    return 0;
}