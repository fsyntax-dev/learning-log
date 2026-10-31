#include <iostream>

// use virtual keyword during inheritance
// make the class public virtual


class BaseA{
public:
    virtual void function() {std::cout << "BaseA::function()" << "\n";}    
};

class DerivedB : public virtual BaseA{

};

class DerivedC : public virtual BaseA{

};

class DerivedD : public DerivedB, public DerivedC{

};

int main(){
    DerivedB child;
    child.function();
}