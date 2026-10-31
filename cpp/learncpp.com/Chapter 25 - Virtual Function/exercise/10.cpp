#include <iostream>

// early bind / static bind - resolve at compile time
// late bind / dynamic bind - resolve at run time

// static bind function
void print(int value){
    std::cout << value << "\n";
}

class Base{
public:
    std::string_view getNameOne() const {return "Base Non Virtual";}
    virtual std::string_view getNameTwo() const {return "Base Virtual";}
};

class Derived : public Base{
public:
    std::string_view getNameOne() const {return "Derived Non Virtual";}
    std::string_view getNameTwo() const override {return "Derived Virtual";}
};



int main(){

    print(5);   // static bind
                // direct function call 

    Derived varA;                
    Base* varB{&varA};

    std::cout << varA.getNameOne() << "\n";     // static bind
    std::cout << varA.getNameTwo() << "\n";     // dynamic bind

    return 0;
}