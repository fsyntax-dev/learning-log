#include <iostream>

// pure virtual function - to create a template/guide which will be inherited

// abstract class - to create template
// concrete class - implementation of the template


// abstract class
class Animal{
public:
    virtual void speak() = 0;
};

// concrete class
class Dog : public Animal{
public:
    void speak() override {
        std::cout << "Bark" << "\n";
    }

};

class Cat : public Animal{
public:
    void speak() override {
        std::cout << "Meow" << "\n";
    }
};

int main(){

    Dog doggo;

    doggo.speak();

    return 0;
}