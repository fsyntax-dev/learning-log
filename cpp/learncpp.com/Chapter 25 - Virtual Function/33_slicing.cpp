#include <iostream>

// Normally - inheritance will construct part
// Derived : [Base Part] + [Derived Part]

// the part will be sliced if it initialize by value


class Base{
protected:
    int m_x{};

public:
    Base(int x) : m_x{x} {}
    virtual ~Base() = default;

    virtual void printNum() {std::cout << m_x << "\n";}
};

class Derived : public Base{
protected:
    int m_y{};

public:
    Derived(int x, int y) : Base{x}, m_y{y} {}  

    void printNum() override {std::cout << m_x << " " << m_y << "\n";}

};

int main(){

    Base obj1 {5};
    Derived obj2 {5,10};

    Base obj3 {obj2};       // by value sliced
    Base* obj4 {&obj2};     // by Pointer Base - no slicing here

    obj3.printNum();
    obj4->printNum();


    return 0;
}

// why the hell you want to pass derived to base by value?
// pass to function