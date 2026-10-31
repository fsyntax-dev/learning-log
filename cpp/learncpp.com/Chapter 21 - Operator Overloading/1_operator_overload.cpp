#include <iostream>

// function overload - allow to create of function work with diff data type

// operator implemented as function
// operator overload - modify operator to work with different data type

int main(){

    int x {5};
    int y {10};

    std::cout << x + y << "\n";
    // compiler has built in operator+

    double a {5.5};
    double b {11.1};

    std::cout << a + b << "\n";
    // compiler has built in operator+
    // function overload happen instead of integer it determine floating point

    // int double etc is built type
    // operator overload solve the problem of using user defined type

    return 0;
}

// operator overload limitation

// other operator can be overload except
//      1. ternary operator             - ?:
//      2. sizeof operator              - sizeof()
//      3. scope resolution perator     - ::
//      4. member selection operator    - .
//      5. pointer member selector      - .*
//      6. typeid                       - typeid()
//      7. casting operator             - static_cast etc

// only can overload operator that exist

// at least one operands must be user-defined type
//      (int + myStruct) (double + std::string)