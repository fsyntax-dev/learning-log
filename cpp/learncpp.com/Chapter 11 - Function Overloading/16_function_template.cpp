#include <iostream>

// function template - simplify process of creating function 
//                     to able to wrk different data type
//                     instead of creating bunch of function manually

// once template is defined compiler can use the template to generate overloaded function

// primary template      - initial function template used to generate function instantiated
// instantiated function - the generated function from primary template

template <typename T>   // T is template parameter
T add(T x, T y){
    return x + y;
}


int main(){

    std::cout << add(5,5) << "\n";
    std::cout << add(5.5,6.9) << "\n";

    return 0;
}