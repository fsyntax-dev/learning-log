#include <iostream>

// pure virtual function - virtual function in base class that has no implementation
//                       - to forced derived class to provide its version of that inherited function

// = 0 makes it pure

class Base{
public:
    virtual void function() = 0;
};

class Derived: public Base{
public:
    void function() override {std::cout << "Derived::function()" << "\n";}
};

int main(){


    return 0;
}