#include <iostream>

// exception - error while the program is running
//      divide by zero
//      file not found
//      invalid input

// instead of program crashing - try throw and catch it

// try      - wrap the risky code
// throw    - create the error signal
// catch    - handle the error - so it doesnt terminate when throw happen

// try block detect exception and route it to catch block
// once the exception has been routed to catch block - exception considered handled

// catch parameters works same as function parameters - 
//      exceptions of fundamental types can be catch by value
//      exceptions of non fundamental types can be catch by const reference - to avoid unnecessary copy/prevent slicing

// try risky code -> throw type -> throw routed to catch - catch handle error



int main(){

    try{
        throw -1;
        // throw int
    }

    // catch int
    catch(int){
        std::cerr << "Catch int error" << "\n";
    }

    catch(double){
        std::cerr << "Catch double error" << "\n";
    }

    std::cout << "Program resumes as usual" << "\n";




    return 0;
}