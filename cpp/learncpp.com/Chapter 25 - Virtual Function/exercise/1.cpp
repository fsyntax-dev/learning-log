#include <iostream>

// inheritance - is a relantionshp
//             - derived object has two part - derived and base

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

    Derived varA {5};
    std::cout << "varA is a: " << varA.getName() << " Value: " <<  varA.getValue() << "\n";

    // We can set derived object as derived reference and pointer

    Derived& varB {varA};
    std::cout << "varB is a: " << varB.getName() << " Value: " <<  varB.getValue() << "\n";

    Derived* varC {&varA};
    std::cout << "varC is a: " << varC->getName() << " Value: " <<  varC->getValue() << "\n";

    return 0;
}