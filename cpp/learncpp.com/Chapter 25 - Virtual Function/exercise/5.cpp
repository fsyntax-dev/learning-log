#include <iostream>
#include <string_view>

// virtual function - special member function that resolved most derived class 
//                    when you created Base ref/ptr to Derived object

class Base{
public:
    // special member function - virtual function
    virtual std::string_view getName() const {return "Base";}
};

class Derived : public Base{
public:
    // it will resolved to this function - if Base ref/ptr to derived object
    std::string_view getName() const override {return "Derived";}       
};

int main(){

    Derived varA;
    Base* varB {&varA};

    std::cout << varB->getName() << "\n";

    // Base ptr to derived object - call virtual function
    // function call (which is virtual) resolve with most derived class member function

    return 0;
}