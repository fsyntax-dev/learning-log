#include <iostream>

// virtual destructor - solve the issue Base ref/ptr to Derived is on heap
//                      

class Base{
public:
    virtual ~Base() {
        std::cout << "Base Destructor" << "\n";
    }
};

class Derived : public Base{
public:
    virtual ~Derived(){
        std::cout << "Derived Destructor" << "\n";
    }    
};

int main(){

    Derived* varA {new Derived};        // allocate to heap
    Base* varB {varA};                  // Base ptr to Derived object

    delete varB;                        // only call Base::~Base()

    return 0;
}

// why derived destructor not called?
//      non virtual destructor is static binding - resolve at compile time

//      when allocate it on heap (dynamic allocation) - this event happen in runtime 
//      that why the non virtual destructor doesn't called

// why does virtual can help to solve this problem?
//      the vptr and vtable exist during runtime


// static bind / early bind

// dynamic bind / late bind
