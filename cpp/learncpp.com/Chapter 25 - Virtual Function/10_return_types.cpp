#include <iostream>

// return type of virtual function and its override must match

class Parent{
public:
    virtual int getNum() const {return 5;}
};

class Child : public Parent{
public:
    virtual double getNum() const {return 5.5;}
};

int main(){


    return 0;
}