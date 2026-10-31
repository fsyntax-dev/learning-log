#include <iostream>
#include <string_view>

//  case in child class - virtual function override can have different return type than its parent
//                      - if virtual function in parent return pointer or reference 
//                      - overide function in child can return pointer or reference

class Parent{
public:
    virtual Parent* getThis() {
        std::cout << "Parent::getThis()" << "\n";
        return this;
    }
    void printType() {std::cout << "Parent" << "\n";}
};

class Child : public Parent{
public:
    Child* getThis() override {
        std::cout << "Child::getThis" << "\n";
        return this;
    }
    void printType() {std::cout << "Child" << "\n";}
};

int main(){

    Child child{};
    Parent* parent{&child};

    child.getThis()->printType();
    parent->getThis()->printType();

    return 0;
}