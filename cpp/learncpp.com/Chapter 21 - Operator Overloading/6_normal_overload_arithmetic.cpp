#include <iostream>

// friend function - directly access private member
// normal function - access private member via getter

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}
    
    int getNum() const {return m_x;}
};

Num operator+(const Num& x, const Num& y){
    return Num{x.getNum() + x.getNum()};
}

int main(){

    Num x {5};
    Num y {10};


    return 0;
}