#include <iostream>

// diamond problem - happen in multiple inheritance - derived class inhertied from 2 class that inherit same base class
/*
      A
     / \
    B   C
     \ /
      D

Class A     = base class
Class B C   = derived class from A
Class D     = derived class from B and C

problem: D inherited from A 2 times - ambiguity
*/

class BaseA{
public:
    virtual void function() {std::cout << "BaseA::function()" << "\n";}            
};

class DerivedB : public BaseA{
public:

};

class DerivedC : public BaseA{
public:

};

class DerivedD : public DerivedB, public DerivedC{
public:

};

int main(){

    DerivedD child;

    child.function();   // ambiguous


    return 0;
}

// to solve this use virtual keyword when inherit