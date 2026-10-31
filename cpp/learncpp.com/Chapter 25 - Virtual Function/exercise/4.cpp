#include <iostream>
#include <string>
#include <string_view>

// virtual function - can solve the Derived member function shadow
//                  - when Base ref/ptr to Derived object

class Base{
public:
    virtual std::string_view getName() {return "Base";}
};

class DerivedOne : public Base{
public:
    std::string_view getName() override {return "DerivedOne";}
};

class DerivedTwo : public Base{
public:
    std::string_view getName() override {return "DerivedTwo";}
};

void printType(Base& base){
    std::cout << base.getName() << "\n";
}

int main(){

    DerivedOne varA;
    DerivedTwo varB;

    Base& varC{varA};
    Base& varD{varB};

    printType(varC);
    printType(varD);


    return 0;
}