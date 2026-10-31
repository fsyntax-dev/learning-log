#include <iostream>

// inheritance - a class inherit attribute from other class
//             - is a
//             - class B is a type of class A


/*
        Car
         |
         v
      Porsche
         |
         V
     911 GT3 RS   

Porsche is a child of Car
Car is a parent for Porsche

911 GT3 RS is a child of Porsche
Porsche is a parent for Porsche

*/

/*
access specifier
    private     - same class
    protected   - same class + inherited class
    public      - everyone
*/

/*
class Child : public Parent {}

inheritance is private by default 
use public access specifier

to initialize parent in child - construct it during initilization
                              - call constructor during initialization                           
*/

class X{
protected:
    int m_x{};

public:
    X() = default;
    X(int x) : m_x{x} {}    
};

class Y : public X{
private:    
    int m_y{};

public:
    Y(int x, int y) : X{x}, m_y{y} {};    

};

int main(){


    return 0;
}