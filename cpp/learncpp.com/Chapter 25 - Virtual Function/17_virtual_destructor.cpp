#include <iostream>

class Parent{
public:
    Parent(){std::cout << "Parent Constructed" << "\n";}
    ~Parent(){std::cout << "Parent Destructed" << "\n";}
};

class Child : public Parent{
public:
    Child(){std::cout << "Child Constructed" << "\n";}
    ~Child(){std::cout << "Child Destructed" << "\n";}
};

int main(){

    Parent* ptr {new Child()}; // initialize Child with Parent 
    delete ptr;

    // child constructor 
    // parent constructor and destructor called

    // but child destructor never called - memory leaks

    // that why we use virtual destructor

    return 0;
}