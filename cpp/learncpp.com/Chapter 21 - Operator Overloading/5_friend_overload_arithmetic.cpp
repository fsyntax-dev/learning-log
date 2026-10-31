#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num() = default;
    Num(int x) : m_x {x} {}

    int getNum() const {return m_x;}

    // same operands
    friend Num operator+(const Num& x, const Num& y);

    // different operands
    friend Num operator+(const Num& x, const int y);
    friend Num operator+(const int x, const Num& y);
};

Num operator+(const Num& x, const Num& y){
    return x.m_x + y.m_x;
}

Num operator+(const Num& x, const int y){
    return Num{x.m_x + y};
}

Num operator+(const int x, const Num& y){
    return Num{x + y.m_x};
}

int main(){

    Num x {5};
    Num y {10};
    int z {15};

    Num numAB{x + y};                   // same operands
    Num numCD{x + z};                   // compound + fundamental
    Num numEF{z + x};                   // fundamental + compound

    std::cout << numAB.getNum() << "\n";    
    std::cout << numCD.getNum() << "\n";
    std::cout << numEF.getNum() << "\n";

    return 0;
}