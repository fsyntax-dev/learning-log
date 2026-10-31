#include <iostream>
#include <functional>

// another alt to store function pointer
// std::function<function_type(parameter_type)> function_name {function_address};

void name(std::string_view name){
    std::cout << name << "\n";
}

int main(){

    std::function<void(std::string)> funcPtr {name};

    funcPtr("John");
    

    return 0;
}