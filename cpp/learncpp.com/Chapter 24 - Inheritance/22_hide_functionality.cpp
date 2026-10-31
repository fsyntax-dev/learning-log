#include <iostream>

// hide functionality - hide functionality in parent so it can't be access in child (called as encapsulate)
//                    - just use new access specifier

class Parent{
public:
    int m_value{};

};

class Child : public Parent{
private:
    using Parent::m_value;

public:
    Child(int value) : Parent{value} {}    
};



int main(){

    Child child{10};
    std::cout << child.m_value << "\n"; // m_value is private in child

    return 0;
}