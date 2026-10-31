#include <iostream>
using namespace std;
/*
Object (Example)
    + Example / instance of that class

Class (Category)
    + A blueprint

Attribute (Characteristic/Properties)
    + Characteristic of object

Methods
    + Function that exists in class
    + What it can performe
*/

//class
class Human{
public:
    //attribute
    string name;
    string occupation;
    int age;

    //Methods
    void eat()
        {
            cout << "This person is eating" << "\n";
        }
    void drink()
        {
            cout << "This person is drinking" << "\n";
        }
    void sleep()
        {
            cout << "This person is sleeping" << "\n";
        }
};

int main() 
{
//  class|object
    Human human1;

    human1.name = "NameOne";
    human1.occupation = "Hedge Fund Manager";
    human1.age = 24;
    
    cout << "\n";
    cout << human1.name << "\n";
    cout << human1.occupation << "\n";
    cout << human1.age << "\n";

    human1.sleep();

    return 0;
    
}