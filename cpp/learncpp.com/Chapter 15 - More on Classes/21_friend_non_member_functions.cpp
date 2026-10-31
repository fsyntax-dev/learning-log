#include <iostream>

// friend - granted access to private and protected member of class

class Num{
private:
    int m_x{};
public:
    void setX(int x) {m_x = x;}
    int getX() const {return m_x;}

    Num(int x) : m_x{x} {}

    friend void print(const Num& number);   // declaration
};

void print(const Num& number){              // definition
    std::cout << number.m_x;
}                                           // print() is a friend of Num

int main(){


    Num valueA(5);

    std::cout << valueA.getX() << "\n";

    print(valueA);


    return 0;
}