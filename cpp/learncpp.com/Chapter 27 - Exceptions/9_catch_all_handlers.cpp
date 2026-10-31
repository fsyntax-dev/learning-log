#include <iostream>

// now we stuck in this loops
//      function can throw exception of any data type 
//      if exception not caught - std::terminate() and stack isnt unwound
//      explicit catch handler for any data type is too much

// C++ provied mechanism to catch all types of exceptions - catch-all handler
// use elipses operator ..
//      ellipsis catch handler

int typeA(int x){
    if(x == 0){
        throw  1;
    }
    else{
        return x * x;
    }
}

double typeB(double x){
    if(x == 0.0){
        throw 1.1;
    }
    else{
        return x * x;
    }
}

void typeC(int x){
    if(x == 0){
        throw "Error";
    }
    else{
        std::cout << "x is " << x << "\n"; 
    }
}

int main(){
    try{
        typeA(0);
        typeB(0.0);
        typeC(0);
    }
    catch(const char*){
        std::cerr << "Const Char*" << "\n";
    }
    
    catch(...){
        std::cerr << "Undertermined Error Catched" << "\n";
    }

    return 0;
}