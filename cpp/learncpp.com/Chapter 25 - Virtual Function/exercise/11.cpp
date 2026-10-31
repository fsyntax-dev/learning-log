#include <iostream>
#include <string_view>

// vtable - hidden lookup table of function for class that has virtual func
// vptr   - hidden pointer for object class that has virtual function

// class with virtual function has its own vtable
// the object created from the class that has virtual function has vptr


class Base{
public:
    virtual std::string_view getName() const {return "Base Virtual";}
    virtual ~Base() {std::cout << "Base Destructor" << "\n";}
};

class Derived final : public Base{
public:
    std::string_view getName() const override {return "Derived Virtual";}
    virtual ~Derived() {std::cout << "Derived Destructor" << "\n";}
};

int main(){

    Derived varA;   
    Base* varB{&varA};

    std::cout << varB->getName() << "\n"; 


    return 0;
}

// vtable set for Base and Derived 