#include <iostream>

class Base{
public:
    std::string_view getName() const {return "Base";}
};

class Derived : public Base{
public:
    std::string_view getName() const {return "Derived";}
};

int main(){

    Derived derived{};

    // previous lesson
    // pointer and reference to the base class of derived object
    Base* ptrbase {&derived};
    Base& refbase {derived};

    std::cout << ptrbase->getName() << "\n";
    std::cout << refbase.getName() << "\n";


    return 0;
}