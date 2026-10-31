#include <iostream>

// interface class - class that has no member variable
//                 - all the function are pure virtual
//                 - useful to declare pure virtual function and re define derived

// like a class just to declare functionality
// a class with collective function


// naming interface class - capital I + class name

// why? same function name with different implementation

class ISpecies{
protected:
    virtual void sound() = 0;
};

class Human : ISpecies{
public:
    void sound() override {std::cout << "Hello" << "\n";}     
};

class Alien : ISpecies{
public:
    void sound() override {std::cout << "Zip Zip" << "\n";}    
};

int main(){

    Human falloza;
    Alien bronzi;

    falloza.sound();
    bronzi.sound();

    return 0;
}

// abstract class - a template class
// concrete class - a implementation class
// interface class - a class with collective pure virtual function