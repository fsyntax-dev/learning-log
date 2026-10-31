#include <iostream>

// specialize comes after declaration of normal func

template <typename T>
void func(T x){
    std::cout << x << " normal template" << "\n";
}

template<>
void func<double>(double x){
    std::cout << x << " specialize template" << "\n"; 
}

int main(){

    func(5);
    func(5.5);

    return 0;
}