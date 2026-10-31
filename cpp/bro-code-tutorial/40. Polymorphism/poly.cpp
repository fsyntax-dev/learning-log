#include <iostream>
using namespace std;
/*
Polymorphism
    + Inheritance + Override
    + Inherit function from parent class and overide that function
    + virtual ovveride 

*/

class Animal{
    public:
        // virtual - allow function to be override
        virtual void makeSound(){
            cout << "Animal do have sound" << "\n";
        }

};

class Dog : public Animal{
    public:
        // override - ensure the function override the parent function
        void makeSound() override{
            cout << "Dog do bark, Awrf" << "\n";
        }
    
    };


int main() 
{
    Animal animal;
    Dog dog;

    animal.makeSound();
    dog.makeSound();


    return 0;
    
}