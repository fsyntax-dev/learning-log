#include <iostream>

// normal template work for any type but you want it behave differently
// specialization - define different implementation 

// this code goal:
// goal to print any type of number 
// but double different to print scientific notation 

// normal template
template <typename T>
void print(const T& num){
    std::cout << num << "\n";
}

// normal template can create different behaviour - by overloading
void print(const double& num){
    std::cout << std::scientific << num << "\n";
}

int main(){

    print(5);
    print(55.5);    // but better solution should be template specialization

    return 0;
}