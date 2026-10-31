#include <iostream>

// floating point promotion - float can be converted to double

void printDouble(double valueA){

    std::cout << valueA << "\n";

}

int main(){

    printDouble(5.0);       // no type conversion
    printDouble(5.0f);      // numeric promotion - from float to double
                            // 5.0 float to 5.0 double

    return 0;
}