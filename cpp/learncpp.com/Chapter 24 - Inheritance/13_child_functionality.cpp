#include <iostream>

// inheritance benefit - ability to use alread written code
//                     - inherit parent class functionality and then add/modify/hide new functionaly in child class

// add new functionality in child class

class Parent{
protected:
    int m_value{};

public:
    Parent(int value) 
        : m_value{value} {}    

    void func() const {std::cout << "Parent" << "\n";}        
};

class Child : public Parent{
public:
    Child(int value) : Parent{value} {}

    // add new functionality from inherited attribute
    int getValue() const {return m_value;}

};

int main(){

    Child num {10};
    
    std::cout << num.getValue() << "\n";

    return 0;
}