#include <iostream>

// override inherited attribute
// make the inherited function work different in child class 

class Parent{
protected:
    int m_value{};

public:
    Parent(int value) : m_value{value} {}

    void func() const {std::cout << m_value << " from parent" << "\n";}
};

class Child : public Parent{
public:
    Child(int value) : Parent{value} {}

    // override inherited attribute - redefine it
    void func() const {std::cout << m_value << " from child" << "\n";}

};

int main(){

    Parent parent{15};
    parent.func();

    Child child{20};
    child.func();


    return 0;
}