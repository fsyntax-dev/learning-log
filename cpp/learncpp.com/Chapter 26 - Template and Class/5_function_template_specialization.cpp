#include <iostream>

// first declare normall template then declare specialize template

/*
template <>
type function_name<type> ()

*/

template <typename T>                               // normal function
void print(const T& num){
    std::cout << t << "\n";
}

template<>                                          // no template parameter
void print<double>(const double& num){              // specialized for type double
    std::cout << std::scientific << num << "\n";
}

int main(){


    return 0;
}

// declare template<> to tell compiler we are doing something to template
// declare print<double> to tell compiler we are specializing the function for type double