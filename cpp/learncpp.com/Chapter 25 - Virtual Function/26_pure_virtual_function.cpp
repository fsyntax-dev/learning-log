#include <iostream>

// pure virtual function - a template/placeholder function then inherited to derived to later redefine the function

// abstract class can't be initialized - just for inheritance purpose

class Base{
protected:
    virtual void print() = 0;
};

class Derived : public Base{
public:
    void print() override {std::cout << "Dervied::print()" << "\n";}
};

int main(){

    Derived child;

    child.print();


    return 0;
}