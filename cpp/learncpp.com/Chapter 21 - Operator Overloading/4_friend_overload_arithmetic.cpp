#include <iostream>

// if operands have same type              - it doesn't matter x + y or y + x
// if operands doesn't have different type - x - y and y + x is not the same

/*
when pass Num 4 + int 5 - it call operator(Num, int)
when pass int 5 + Num 4 - it call operator(int, Num)

when overload we need to write two function 
both will give same result but it declare as different paramter order
*/

class Num{
private:
    int m_x{};

public:
    Num() = default;
    Num(int x) : m_x{x} {}

    int getNum() const {return m_x;}

    friend Num operator+(const Num& x, const int y);
    friend Num operator+(const int x, const Num& y);

};

Num operator+(const Num& x, const int y){
    return Num{x.m_x + y};
}

Num operator+(const int x, const Num& y){
    return Num{x + y.m_x};
}


int main(){

    Num x {5};
    int y {10};

    Num numXY{x + y};
    Num numAB{y + x};

    std::cout << numXY.getNum() << "\n";
    std::cout << numAB.getNum() << "\n";

    return 0;
}