#include <iostream>

// using declaration - can change inhertied atribute access

class Parent{
private:
    int m_value{};

public:
    Parent(int value) : m_value{value} {}   
    
protected:
    void printValue() const {std::cout << m_value << "\n";}    
};

class Child : public Parent{
public:
    Child(int value) : Parent{value} {}

    // pirntValue inherited as protected
    // change it to public with "using declaration"
    using Parent::printValue;
};



int main(){

    Child child {10};
    child.printValue();

    return 0;
}