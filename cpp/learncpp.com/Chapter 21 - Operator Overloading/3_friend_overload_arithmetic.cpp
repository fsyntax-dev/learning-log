#include <iostream>

// friend function - function outside class has access to private class member
//                 - declare inside class with friend keyword
//                 - define outside class

class Num{
private:
    int m_x{};    

public:
    Num() = default;
    Num(int x) : m_x{x} {}

    int getNum() const {return m_x;}

    friend Num operator+(const Num& x, const Num& y);
};

Num operator+(const Num& x, const Num& y){
    return x.m_x + y.m_x;
}


int main(){

    Num numX {5};
    Num numY {10};

    Num sumXY {numX + numY};
    std::cout << sumXY.getNum() << "\n";

    return 0;
}