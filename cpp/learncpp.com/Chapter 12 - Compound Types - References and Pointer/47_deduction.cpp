#include <iostream>

// type deduction - auto keywords - tells compiler what type based on arguments given
// by default auto will drop const/constexpr
// need to reapply const if we wanna keep const

int main(){

    const int valueA {5};
    auto valueB{valueA};        // deduce as int & const drop 

    const auto valueC{valueA};  // deduce as int & reapply const
    
    return 0;
}