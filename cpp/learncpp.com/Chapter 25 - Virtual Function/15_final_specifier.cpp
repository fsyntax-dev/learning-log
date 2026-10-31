#include <iostream>
#include <string_view>

// final specifier - prevent override virtual function
//                 - prevent inherit from class

class Parent{
public:
    virtual std::string_view getName() const {return "Parent";}
};

class Child : public Parent{
public:
    std::string_view getName() const override final {return "Child";}
};

class StepChild final : public Child{
public:
    std::string_view getName() const override {return "StepChild";}     // can't override
    virtual std::string_view getAlias() const {return "Broski";}    
};

class ForbiddenChild : public StepChild{                                // can't inherit
public:
        
};

int main(){


    return 0;
}