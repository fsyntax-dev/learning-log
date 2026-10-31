#include <iostream>

// initialize parent in child class constructor
//      assign inherit variable with value - inefficient, it doesnt work with const / reference
//      call parent constructor when initialize member for child constructor - best practice

// cam't called member of inherit class - bcs initializer list is only for the same class
// bcs it wont work if the inherit variable is in const or reference

class Parent{
public:
    int m_x{};
    Parent() = default;
    Parent(int x) : m_x{x} {}
};

class Child : public Parent{
public:
    int m_y{};
    Child(int x, int y) : m_y{y} {
        m_x = x;                            // its fine for non const variable
                                            // not gonna work if its const or reference 
                                            // not efficient bcs it asign twice

                                            // note : construction of child class involved two part

                                            // twice - during construction of parent constructor
                                            //       - during assigment of child constructor                   
    } 
};

class AnotherChild : public Parent{         // better ways - call parent constructor in child initializer list
public:
    int m_z{};
    
    AnotherChild(int x, int z) 
        : Parent{x}, m_z{z} {}
    
};

int main(){

    AnotherChild num {10, 20};

    std::cout << num.m_x << " " << num.m_z << "\n";


    return 0;
}