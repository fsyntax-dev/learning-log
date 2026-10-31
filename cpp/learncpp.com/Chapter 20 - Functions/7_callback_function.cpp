#include <iostream>

// callback function - function used as arguments of another function
/*
type function_name (void (*funcPtr)(parameter_list))

*/

void greet(){
    std::cout << "Hello ";
}

void name(std::string_view name, void (*fcnPtr)()){
    fcnPtr();
    std::cout << name << "\n";
}


int main(){

    name("John Doe", greet);


    return 0;
}