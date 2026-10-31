#include <iostream>
#include <string>
#include <string_view>

// dynamic casting - safely convert/cast pointer/reference of base class to derived during runtime
//                 - convert base to derived

class Base{
public:
    virtual std::string_view getName() const {return "Base::getName()";}
    virtual ~Base () = default;
};

class Derived : public Base{
public:
    std::string_view getName() const override {return "Derived::getName()";}
};

void printName(const Base* base){
    std::cout << base->getName() << "\n";
}

int main(){

    Base* parentObj {new Derived()};
    Derived* childObj {dynamic_cast<Derived*>(parentObj)};

    printName(childObj);


    return 0;
}