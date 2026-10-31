#include <iostream>

// Derived has two part - Derived and Base
// since Derived contain Base part 
//      Derived object can be set to Base reference and pointer

class Base{
protected:
    int m_value{};

public:
    Base(int value) : m_value{value} {}
    
    std::string_view getName() const {return "Base";}
    int getValue() const {return m_value;}
};

class Derived : public Base{
public:
    Derived(int value) : Base{value} {}

    std::string_view getName() const {return "Derived";}
    int getValueDouble() const {return m_value * 2;}

};

int main(){

    // Derived object
    Derived varA {5};
    std::cout << "varA is a: " << varA.getName() << " Value: " <<  varA.getValue() << "\n";

    // Base reference/pointer to Derived object 
    Base& varB {varA};
    std::cout << "varB is a: " << varB.getName() << " Value: " << varB.getValue() << "\n";

    Base* varC {&varA};
    std::cout << "varC is a: " << varC->getName() << " Value: " << varC->getValue() << "\n"; 
    
    return 0;
}

// Base reference/pointer to Derived object 
//      bcs Derived has base part (inheritance - Derived part and Base part)

//      but shadow happen when Base ref/ptr to Derived object
//          varB.getName() doesnt called Derived::getName() because this function is shadow(hide)
//          it called Base::getName() instead

// why use Base ref/ptr? 
//      it use as function parameter - takkan la nk overload function dengan Derived parameter
//                                   - instead guna je base sbg parameter