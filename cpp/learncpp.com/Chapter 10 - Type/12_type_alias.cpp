#include <iostream>

// alias - another thing for something
// alias for data type
// using name = type;

using Height = double;  //create alias

int main(){

    Height personOne{170.0};

    std::cout << typeid(personOne).name() << "\n"; 

    return 0;
}