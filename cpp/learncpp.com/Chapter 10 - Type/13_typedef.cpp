#include <iostream>

// typedef - type definition
//         - older way to create alias
// alias for data type
// typedef type name;

typedef double Height;

int main(){


    Height personOne{170.1};

    std::cout << typeid(personOne).name() << "\n";

    return 0;
}

// best pratice use type alias over typedef