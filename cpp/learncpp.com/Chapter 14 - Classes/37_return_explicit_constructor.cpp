#include <iostream>

class Foo{
private:
    int m_x{};
public:
    int getX() const {return m_x;}

    explicit Foo(){}
    explicit Foo(int x) : m_x{x} {}

};

Foo getX(){
    // okay
    return Foo{};
    return Foo{5};

    // not okay
    return 5;
    return {};
    return {5};
    
}


int main(){

    return 0;
}