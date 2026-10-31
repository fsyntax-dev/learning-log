#include <iostream>

// Declaration  - Tells it exists
// Definition   - Declare and implements/intiliazied

void nothingHere();                     //declaration

void somethingHere(){                   //definition
    std::cout << "Something" << "\n";
}  

void belowMain();                       //declaration                  



int main(){

    somethingHere();
    belowMain();

    return 0;
}

void belowMain(){
    std::cout << "Below Main" << "\n";  //definition
}