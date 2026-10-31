#include <iostream>

// to disable inherited functionality in child

class Parent{
private:
    int m_x{};

public:
    Parent(int x) : m_x{x} {}
    
    int getVal() const {return m_x;}
};

class Child : public Parent{
public:
    Child(int x) : Parent{x} {}

    int getVal() const = delete;
};

int main(){

    Parent parent {10};
    Child child {10};

    std::cout << parent.getVal() << "\n";
    std::cout << child.getVal() << "\n";

    // cast

    std::cout << static_cast<Parent&>(child).getVal() << "\n";

    return 0;
}