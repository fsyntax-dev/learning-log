#include <iostream>

// implicitly override - signature and return type match

class Base{
public:
    virtual std::string_view getName(int x) {return "A";}
};

class Derived : public Base{
public:
    std::string_view getName(double x) {return "B";}
    // if we put override here - compile error (can help us to identify)
};

int main(){

    Derived varA{};
    Base* varB {&varA};

    std::cout << varB->getName(1) << "\n";
    // Base::getName() get called not Derived::getName()
    // because the signature didn't match

    return 0;
}