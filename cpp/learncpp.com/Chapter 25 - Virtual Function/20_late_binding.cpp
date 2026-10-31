#include <iostream>

// late binding or dynamic binding - program decide which function to call when running
//                                 - happen to virtual function

class Base{
public:
    virtual void print() {std::cout << "Base::print()" << "\n";}
};

class Derived : public Base{
public:
    void print() override {std::cout << "Derived::print()" << "\n";}
};

int main(){

    Derived child;
    Base* parent{&child};   // polymorph

    parent->print();        // late binding

    // why late binding here? because virtual resolve at runtime

    return 0;
}

// i guess the reason for late binding is we want the program to be dynamic
// which user has option to choose and let then program decide during runtime