#include <iostream>


// polymorph - create child with parent ptr
//           - it cause problem - child destructor never get called
//           - to fix it - make parent desutrctor as virtual

class Parent{
public:
    Parent() {std::cout << "Parent Constructed" << "\n";}
    virtual ~Parent() {std::cout << "Parent Destructor" << "\n";}    
};

class Child : public Parent{
public:
    Child() {std::cout << "Child Constructed" << "\n";}
    ~Child() override {std::cout << "Child Destructor" << "\n";}    
};

int main(){

    Parent* parent {new Child()};
    delete parent;

    // stack - automatic storage    - controlled automatically
    // heap  - dynamic storage      - controlled by new / delete
    

    return 0;
}