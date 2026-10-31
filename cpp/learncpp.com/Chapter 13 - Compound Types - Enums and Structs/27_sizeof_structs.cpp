#include <iostream>

struct Foo{
    short x{};
    int y{};
    double z{};
};

int main(){

    std::cout << sizeof(Foo::x) << "\n";
    std::cout << sizeof(Foo::y) << "\n";
    std::cout << sizeof(Foo::z) << "\n";
    std::cout << sizeof(Foo::x) + sizeof(Foo::y) + sizeof(Foo::z) << "\n";
    
    std::cout << sizeof(Foo) << "\n";

    return 0;
}