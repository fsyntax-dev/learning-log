#include <iostream>
using namespace std;

class Person{ //class
public:
    //attribute
    string  Name;
    int     Age;
    float   Height;
    float   Weight;
    string  Nationality;

    //constructor
    Person(string name, int age, float height, float weight, string nationality){
        Name        = name;
        Age         = age;
        Height      = height;
        Weight      = weight;
        Nationality = nationality;
    }
    //class method
    void getInfo(){
        cout << "\n";
        cout << "Name: "        << Name        << "\n";
        cout << "Age: "         << Age         << " years old" << "\n";
        cout << "Height: "      << Height      << " cm" << "\n";
        cout << "Weight: "      << Weight      << " kg"  << "\n";
        cout << "Nationality: " << Nationality << "\n";
    }
};

int main() 
{   
    // create objects 
    Person p1("NameOne"  , 24, 170, 60, "Malaysia");
    Person p2("NameTwo"    , 23, 175, 55, "Cyprus");

    //invoke class method
    p1.getInfo();
    p2.getInfo();

    return 0;
    
}