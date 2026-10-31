#include <iostream>

// switch case  - replacement for too many if else
// return       - to exit function entirely
// break        - to keep running the rest of the function
// default case - if expression didn't match with case will go to default

void evalNumber(int x){
    switch(x){                              // switch to evaluate expression
        case 1:                             // just like if    
            std::cout << "One" << "\n";     // then statement if true
            return;                         // return or break
        case 2:
            std::cout << "Two" << "\n";
            return;
        case 3:
            std::cout << "Third" << "\n";
            return;
        case 4:
            std::cout << "Four" << "\n";
            return;
        case 5:
            std::cout << "Five" << "\n";
            return;
        default:                            // just like else
            std::cout << "Unknown" << "\n"; // statement if false 
            return;                         // return
    }
}

int main(){

    evalNumber(5);



    return 0;
}