#include <iostream>
#include <string>
#include <string_view>

class Animal{
protected:
    std::string m_name{};

    // Constructor in proteted: to avoid this class been construct
    //                          this class is for inheritance purpose
    Animal(std::string_view name) : m_name{name} {}

    // Prevent Slicing
    Animal(const Animal&) = delete;
    Animal& operator=(const Animal&) = delete;

public:

    std::string_view getName() const {return m_name;}
    std::string_view sound() const {return "???";}
};

class Cat : public Animal{
public:
    Cat(std::string_view name) : Animal{name} {}

    std::string_view sound() const {return "Moew";}
};

class Dog : public Animal{
public:
    Dog(std::string_view name) : Animal{name} {}

    std::string_view sound() const {return "Woof";}
};


int main(){

    Cat cato {"cato"};
    std::cout << cato.getName() << ": " <<  cato.sound() << "\n";
    
    Animal* cattie {&cato};
    std::cout << cattie->getName() << ": " << cattie->sound() << "\n";

    // why the hell Parent pointer initialize address of Child 
    // sbb kalau ada function paramter guna class base?


    return 0;
}