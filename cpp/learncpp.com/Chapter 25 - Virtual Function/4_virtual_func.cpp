#include <iostream>
#include <string_view>

// virtual function - special type of member function
//                  - a function in base class that can be override in derived class
//                  - when called the child through base class pointer or reference - the override derived version will be call
//                  - child object -> parent paremeters via reference or pointer

// use virtual keyword - virtual will tell if there any derived version function

class Base{
public:
    virtual std::string_view getName() const {return "Base";}
};

class Derived : public Base{
public:
    virtual std::string_view getName() const {return "Derived";}
};

int main(){

    Derived derive {};

    // upcasting - treat derived object as base pointer
    Base& refbase {derive};
    Base* ptrbase {&derive};


    std::cout << refbase.getName() << "\n";
    std::cout << ptrbase->getName() << "\n";

   

    return 0;
}

