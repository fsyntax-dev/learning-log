#include <iostream>

class Foo{
private:
    int m_x{};
public:
    int getX() const {return m_x;}

    Foo(int x) : m_x{x} {}
};

void print(Foo f){
    std::cout << f.getX();
}

int main(){

    print(5);   // passing 5 which is an "int" 
                // but int != Foo
                // so compiler implicitly convert "int" to "Foo"

    Foo foo{5}; // explicitly convert int value 5 to Foo
              

    return 0;
}