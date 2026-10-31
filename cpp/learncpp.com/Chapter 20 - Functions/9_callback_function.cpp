#include <iostream>

// set function pointer with default function

void greetHello(){
    std::cout << "Hello, ";
}

void greetBye(){
    std::cout << "Bye, ";
}

void name(std::string_view name, void (*fcnPtr)() = greetHello){
    fcnPtr();
    std::cout << name << "\n";
}

int main(){

    name("John Doe");
    name("John Doe", greetBye);


    return 0;
}