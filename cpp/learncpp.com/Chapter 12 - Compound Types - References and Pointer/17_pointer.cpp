#include <iostream>
#include <typeinfo>


int main(){

    int x {5};
    int* ptr {&x};

    std::cout << x << "\n";
    std::cout << ptr << "\n";

    std::cout << typeid(x).name() << "\n";
    std::cout << typeid(ptr).name() << "\n";

    std::cout << sizeof(ptr) << "\n";


    return 0;
}