#include <iostream>

// auto keyword can be use to infer function pointer
// much cleaner syntax

void name(std::string_view name){
    std::cout << name << "\n";
}

int main(){

    auto funcPtr {name};

    funcPtr("John");


    return 0;
}