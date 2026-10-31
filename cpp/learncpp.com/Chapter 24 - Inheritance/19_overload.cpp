#include <iostream>

class Parent{
public:
    void print(int)     {std::cout << "Parent::void print(int)" << "\n";}
    void print(double)  {std::cout << "Parent::void print(double)" << "\n";}

};

class Child : public Parent{
public:

    void print(double)  {std::cout << "Child::void print(double)" << "\n";}
};

int main(){

    Child child {};
    child.print(5);

    // compiler only see print in child bcs the type is child
    // to solve this - using-delcaration in child

    return 0;
}