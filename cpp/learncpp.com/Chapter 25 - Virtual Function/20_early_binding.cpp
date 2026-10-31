#include <iostream>

// define a variable - variable x with type int with value 5
//                   - int x {5};

// binding is the process of associating variable name with properties (type and value)
// function binding - decide which function get called when use the function name

// early binding
//               - happen at compile time
//               - non virtual function use this


// early binding or static binding - compiler know to call function before program runs 
//                                 - it doesn't change while running

class Base{
public:
    void print() {std::cout << "Base Print" << "\n";}
};

class Derived : public Base{
    void print() {std::cout << "Derived Print" << "\n";}
};

int main(){

    Derived child;
    Base* parent{&child};       // parent point to child 

    parent->print();            // which function get called?
                                // parent declared as Base*

                                // the function isn't virtual so - its early binding
                                // it just follow the pointer declared type - that why it call as early bind  




    return 0;
}