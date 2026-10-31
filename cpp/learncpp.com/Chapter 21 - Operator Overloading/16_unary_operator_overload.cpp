#include <iostream>

// unary operator  - single operands
// binary operator - two operands

// unary operator overload as member function

// takes no paramter
// operate on *this

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}
    
    int getNum() const {return m_x;}

    Num operator-() const;

};

Num Num::operator-() const{
    return -m_x;
}

int main(){

    Num number {10};

    std::cout << -10 << "\n";
    std::cout << (-number).getNum() << "\n";
    

    return 0;
}