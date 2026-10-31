#include <iostream>
#include <string>
#include <string_view>
#include <utility>
// polymorphism - many form
//      compile-time polymorphism - polymorphism resolved by compiler
//                                      i. function overload
//                                      ii.template resolution

//      runtime polymorphism       - polymorphism resolved at runtime
//                                      i. virtual function

class Animal{
protected:
    std::string m_name{};
    Animal(std::string_view name) : m_name{name} {}

public:
    const std::string& getName() const {return m_name;}
    virtual std::string_view speak() const {return "?";}    
};

class Cat : public Animal{
public:
    Cat(std::string_view name) : Animal{name} {}

    virtual std::string_view speak() const {return "Meow";}
};

class Dog : public Animal{
public:
    Dog(std::string_view name) : Animal{name} {}

    virtual std::string_view speak() const {return "Woof";}
};

// Derived is a Base - so tkde masalah kalau nak pass argument derived
void info(const Animal& animal){
    std::cout << animal.getName() << ": " << animal.speak() << "\n";

}

int main(){

    Cat catto {"elgato"};
    Dog doggo {"broski"};
    
    info(catto);
    info(doggo);

    Animal* animals[]{&catto, &doggo};

    for(std::size_t i{0}; i < std::size(animals); ++i){
        std::cout << animals[i]->getName() << " " << animals[i]->speak() << "\n";
    }
    

    return 0;
}