#include <iostream>

// if parent member function is virtual
// the overloaded function in child will be implicitly virtual

class Parent{
public:
    virtual int getNum() const {return 0;}
};

class Child : public Parent{
public:
    int getNum() const {return 1;}
};

class StepChild : public Parent{
public:
    int getNum() const {return 2;}
};

void print(const Parent* ptr){
    std::cout << ptr->getNum() << "\n";
}

int main(){

    Child child {};
    StepChild step {};

    print(&child);
    print(&step);

    return 0;
}

// don't call virtual on constructor/destructor
// downside of virtual - inefficient - takes longer time