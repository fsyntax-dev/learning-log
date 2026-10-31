#include <iostream>
using namespace std;
/*
Inheritance 
    + Other class inherit attribute and methods from previous class
    + CHILD classes inherit from PARENT class 

*/

class Animal{
    public:
        bool alive = true;

    void eat(){
        cout << "Eating" << "\n";
    }
};

class Dog : public Animal{
    public:
        void bark(){
            cout << "Awrf" << "\n";
        }
};

class Cat : public Animal{
    public:
        void meow(){
            cout << "Meow" << "\n";
        }
};

int main() 
{
    Dog dog;

    cout << dog.alive << "\n";
    dog.bark();
    dog.eat();

    return 0;
    
}