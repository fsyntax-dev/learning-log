#include <iostream>

// trailling return type - tell function what type should it return
// auto function_name(parameter) -> return type{function _body} 
// readability 

auto divide(int x, int y) -> double;

int main(){

    std::cout << divide(10,4) << "\n";


    return 0;
}

auto divide(int x, int y) -> double{
    return static_cast<double>(x) / y;
}