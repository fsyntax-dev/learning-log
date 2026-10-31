#include <iostream>
#include <String_view>

// final - member will be not override or inherited

class Base{
public:
    virtual std::string_view getName() {return "A";}
    
};

class DerivedOne final : public Base{
    std::string_view getName() override {return "B";}
};

class DerivedTwo : public DerivedOne{
    std::string_view getName() override {return "C";}
    // can't inherit and override final class
};

int main(){

    DerivedOne varA;
    DerivedTwo varB;

    Base* varC{&varA};
    Base* varD{&varB};


    return 0;
}