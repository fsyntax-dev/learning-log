#include <iostream>

template<typename T>
void func(T& lval){
    std::cout << "l value: " << lval << "\n";
}

template<typename T>
void func(T&& rval){
    std::cout << "r value: " << rval << "\n"; 
}

int main(){

    int&& ref{5};
    func(ref);      // it will call (T& lval)
                    // bcs we called r value reference variable
                    // rval reference variable is lvalue


    return 0;
}