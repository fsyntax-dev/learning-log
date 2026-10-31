#include <iostream>

class Parent{
public:
    void print(int x) {std::cout << "Parent::void print(int)" << "\n";}
    void print(double x) {std::cout << "Parent::void print(double)" << "\n";}
};

class Child : public Parent{
public:
    // using declaration in child
    using Parent::print;
    void print(double x) {std::cout << "Child::void print(double)" << "\n";}
};

int main(){

    Child child{};
    child.print(5);
    child.print(5.5);

    return 0;
}