#include <iostream>

// prevent virtual function to be overriden

class Parent{
public:
    virtual void hello() {std::cout << "Hello Parent" << "\n";}
    virtual void bye() {std::cout << "Bye Parent" << "\n";}
};

class Child : public Parent{
public:
    void hello() final override {std::cout << "Hello Child" << "\n";}       // final
    void bye() override {std::cout << "Bye Child" << "\n";}                 // non final
};

class StepChild : public Child{
public:
    void hello() override {std::cout << "Hello StepChild" << "\n";}         // can't override
    void bye() override {std::cout << "Hello StepChild" << "\n";}           // can override
};

int main(){



    return 0;
}