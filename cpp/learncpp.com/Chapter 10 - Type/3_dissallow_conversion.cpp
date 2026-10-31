#include <iostream>

int main(){

    int x{3.5}; // curly braces initialization dissallow conversion
                // compiler knows to convert float to int
                // but int to float can't
                // narrowing conversion
                // means you can't narrow float to int

    return 0;
}