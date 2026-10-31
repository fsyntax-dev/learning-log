#include <iostream>

// child has 2 part : parent part and child part
// when construct child - it construct parent then child

class Parent{
public:
    int m_x{};

    Parent(int x) : m_x{x} {
        std::cout << "Parent: " << x << " allocated" << "\n";
    }
};

class Child : public Parent{
public:
    int m_y {};
    Child(int x, int y) : Parent{x}, m_y{y} {
        std::cout << "Child : " << x << " " << m_y << " allocated" << "\n";
    }
};

int main(){

    Child num {10,20};
    // construct class child
    // it will construct parent first then construct child

    return 0;
}

// it always construct parent first then child