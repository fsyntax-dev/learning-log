#include <iostream>

// lambda capture can be mixed (normal capture + default capture)
// normal capture   - list variable individually
// default capture  - capture everything by value or reference

int main(){

    int health {100};
    int armor {100};

    [=]() {};               // capture everything by value

    [&]() {};               // capture everything by reference

    [=, &armor](){};        // capture everyhting by value, and normal capture reference

    [&, armor](){};         // capture everything by reference and normal capture value

    // cant mixed with the same type
    [=, armor] () {};
    [&, &armor]{} ();


    return 0;
}