#include <iostream>
#include <string>
#include <string_view>

class Base{
public:
    virtual std::string_view getName() const {return "Base::getName()";}
};

// Derive

class Derived : public Base{
public:
    std::string_view getName() const override {return "Derived::getName()";}
};

void printNameValue(Base base){
    std::cout << base.getName() << "\n";
}

void printNameRef(const Base& base){
    std::cout << base.getName() << "\n";
}

int main(){

    Derived obj;

    printNameValue(obj);    // slicing
    printNameRef(obj);      // no slicing

    return 0;
}