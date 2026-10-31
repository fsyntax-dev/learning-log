#include <iostream>

// child doesn't inherit access specifier of that function

class Parent{
private:
    void print() const {std::cout << "parent" << "\n";}
};

class Child{
public:
    void print() const {std::cout << "child" << "\n";}
};

int main(){

    Child child;
    child.print();

    return 0;
}