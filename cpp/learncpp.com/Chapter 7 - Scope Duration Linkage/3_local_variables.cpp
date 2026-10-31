#include <iostream>
#include <string>

// local variable - variable that exist inside function
// scope          - is where identifier can be accessed

void print(std::string text){
    std::cout << text;          // text enter scope
}                               // text out of scope

int main(){

    print("Hello Bitch");

    return 0;
}