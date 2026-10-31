#include <iostream>

// exception thrown - object being thrown is a local var allocated on stack
// stack unwind causing all var and function to be destroyed 

// how does exception object being thrown survive stack unwind?
//      the commpiler made copy of exception object outside call stack

// exception object need to be copyable

class Base{
public:
    Base() {};
    ~Base() {};
};

class Derived : public Base{
public:
    Derived() {};

    // disable copy constructor
    Derived(const Derived&) = delete;

};


int main(){

    Derived child;

    try{
        throw child;
        // compile error because copy constructor is disable
        // so the compiler can't make copy for the throw exception object
    }
    catch(const Derived& dervived){
        std::cerr << "Derived Caught" << "\n";
    }
    catch(const Base& base){
        std::cerr << "Base Caught" << "\n";
    }


    return 0;
}