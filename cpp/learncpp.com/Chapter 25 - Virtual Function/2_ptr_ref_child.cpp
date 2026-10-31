#include <iostream>
#include <string>
#include <string_view>
#include <array>

class Animal{
protected:
    std::string m_name{};

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



// parameter of parent class
void print(const Animal& animal){
    std::cout << animal.getName() << ": " << animal.sound() << "\n";
}

int main(){

    Cat catto {"catto"};
    print(catto);

    std::array<Cat, 3> cats{{
                            {"Fred"},
                            {"Perry"},
                            {"Marzi"}
    }};

    for(auto& cat : cats){
        std::cout << cat.getName() << ": " << cat.sound() << "\n";
    }

    return 0;
}