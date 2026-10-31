#include <iostream>
using namespace std;
/*
Struct
    + Box that holds multiple variable together
    + Custom datatype that groups related data
    + Collection of data
    */

struct Person {
    string name;
    int age;
    float height;
};

int main() 
{
    Person h1;

    h1.name = "NameOne";
    h1.age = 2024;
    h1.height = 170.0;

    cout << "Name: " << h1.name << endl;
    cout << "Age: " << h1.age << endl;
    cout << "Height: " << h1.height << " ft" << endl;


    return 0;
    
}