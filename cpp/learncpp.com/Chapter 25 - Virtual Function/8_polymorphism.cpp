#include <iostream>
#include <string>
#include <string_view>

// polymorph - construct child object by parent pointer
// a derived is a base

// a dog is an animal

class Animal{
protected:
    std::string m_name{};
    Animal(std::string_view name) : m_name{name} {}

public:
    const std::string& getName() const {return m_name;}
    virtual std::string_view speak() const {return "Default";}    
};

class Cat : public Animal{
public:
    Cat(std::string_view name) : Animal{name} {}

    virtual std::string_view speak() const {return "Meow";}
};

class Dog : public Animal{
public:
    Dog(std::string_view name) : Animal{name} {}

    virtual std::string_view speak() const {return "Dog";}
};

void print(const Animal* ptr){
    std::cout << ptr->getName() << ": " << ptr->speak() << "\n";
    // when ptr evaluated it note as virtual func
    // and the argument pass is address of child
    // program will find derived function in child
}

int main(){

    Cat cattie {"cattie"};

    print(&cattie);


    return 0;
}