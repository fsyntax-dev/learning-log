#include <iostream>
#include <string_view>

// override specifier - just a ways to explicitly tell to compiler you want to override
//                    - if you did typo or mismatch signature/return type it will flag
//                    - kinda of safety feature 

class Parent{
public:
    virtual std::string_view getName(int x) const {return "Parent";}
};

class Child : public Parent{
public:
    virtual std::string_view getName(int x) const override {return "Child";}
};

int main(){

    Child child{};
    Parent& parent{child};

    std::cout << parent.getName(1) << "\n";

    return 0;
}

// best practice - virtual on parent , override on child