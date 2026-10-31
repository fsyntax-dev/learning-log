#include <iostream>
#include <memory>   // std::unique_ptr

// std::unique_ptr - manage DMA object that is not shared by multiple objects
//                 - own the object it manages, not share ownership with other
//                 - manage means it delete automatically when out of scope

// std::unique_ptr - has already an overloaded operator* and operator->

class Foo{
public:
    Foo() {std::cout << "Allocated" << "\n";}
    ~Foo() {std::cout << "Deallocated" << "\n";}  
    
};

int main(){

    std::unique_ptr<Foo> foo {new Foo()};


    return 0;
} // deallocated foo - return foo address to OS