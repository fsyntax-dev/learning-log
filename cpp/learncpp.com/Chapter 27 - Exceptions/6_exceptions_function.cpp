#include <iostream>

// try block detect exception by statement in that try block scope
// what if the statement is function call? - Yes, the function can throw exception


// a function can throw exception

// if function have exception   - that function will throw exception 
//                              - catch statement catch the exception

int multiply(int x){
    if(x == 0){
        throw "Zero Number Not Accepted";
    }
    else{
        return x * x;
    }
}

int main(){
    
    int x;
    std::cout << "Enter number: ";
    std::cin >> x;

    try{
        std::cout << multiply(x) << "\n";
    }

    catch(const char* x){
        std::cerr << "Error: " << x << "\n";
    }

    std::cout << "Program runs as usual" << "\n";


    return 0;
}

// why dont let the function catch it own exception?
// why pass it to caller?

// because exception can be handle in many custom ways / or in appropirate context
//                                          like error dialog, text message, crash