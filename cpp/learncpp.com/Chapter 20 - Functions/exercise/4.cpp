#include <iostream>
#include <string>

void greetWelcome(){
    std::cout << "Welcome ";
}

void greetBye(){
    std::cout << "Bye ";
}

void message(std::string_view name, void (*fcnPtr)()){
    fcnPtr();
    std::cout  << name << "\n";
}

int main(){
    
    message("personOne", greetWelcome);

    return 0;
}