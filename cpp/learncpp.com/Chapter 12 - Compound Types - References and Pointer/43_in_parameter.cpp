#include <iostream>
#include <string>

// in paramters - parameters that used to receive input

void enterName(std::string name){               // pass by value -> name is in parameter
    std::cout << "Hello, " << name << "\n";
}


int main(){

    enterName("John");


    return 0;
}