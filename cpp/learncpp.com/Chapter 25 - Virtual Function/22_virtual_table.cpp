#include <iostream>
#include <string_view>

// virtual table - how compiler implement late binding behind the scene
//               - it just like a note for compiler to remember which virtual function to call

class Base{
public:
    std::string_view getName() const {return "Base::getName()";}
    virtual std::string_view getNameVirtual() const {return "Base::getNameVirtual()";}
};

class Derived : public Base{
public:
    std::string_view getName() const {return "Derived::getName()";}
    virtual std::string_view getNameVirtual() const {return "Derived::getNameVirtual()";}
};

int main(){

    Derived child;
    Base* parent{&child};

    std::cout << parent->getName() << "\n";         // resolved in compile time
    std::cout << parent->getNameVirtual() << "\n";  // resolved in runtime


    return 0;
}

// virtual function has virtual table
// it just an array compiler set up at compile time 
// each table just a function ptr point to dervied function