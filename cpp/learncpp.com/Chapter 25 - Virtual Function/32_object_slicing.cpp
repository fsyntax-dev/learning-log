#include <iostream>
#include <string_view>

class Base{
protected:
    int m_value{};

public:
    Base(int value) : m_value{value} {}
    virtual ~Base() = default;
    
    virtual std::string_view getName() const {return "Base::getName()";}
    int getValue() const {return m_value;}
};

class Derived : public Base{
public:
    Derived(int value) : Base{value} {}

    std::string_view getName() const override {return "Derived::getName()";}
};

int main(){

    Derived obj{5};

    // Base point to derived
    Base& ref {obj};
    Base* ptr {&obj};

    std::cout << ref.getName() << " " << ref.getValue() << "\n";
    std::cout << ptr->getName() << " " << ptr->getValue() << "\n";

    std::cout << "\n";

    Base parent{obj};    // slicing - derived part will be sliced only base part will be kept


    return 0;
}

// When Derived inherited from Base
//      Derived has Derived Part + Base Part
//      so no problem when access via Derived to Base pointer/reference

// The problem comes when 
//      Base initialize Derived by value
//      It makes the Derived Part sliced