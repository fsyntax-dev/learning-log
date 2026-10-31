#include <iostream>
#include <functional>

void greetHello(){
    std::cout << "Hello, ";
}

void greetBye(){
    std::cout << "Bye, ";
}

void name(std::string name, std::function<void()> funcPtr){
    funcPtr();
    std::cout << name << "\n";
}

int main(){

    name("John Doe", greetHello);



    return 0;
}