#include <iostream>

void func(const int& lref){
    std::cout << "l-value ref: " << lref << "\n";
}

void func(const int&& rref){
    std::cout << "r-value ref: " << rref << "\n";
}

int main(){

    int x {5};
    func(x);
    func(5);


    return 0;
}