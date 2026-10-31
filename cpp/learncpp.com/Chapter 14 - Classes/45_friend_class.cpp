#include <iostream>

class NumX{
private:
    int m_x{};

public:
    friend class NumY;

    NumX(int x) : m_x {x} {}

};

class NumY{

public:
    
    void revealX (NumX x){
        std::cout << x.m_x << "\n";
    }

};

int main(){

    NumX x(5);
    NumY y{};

    y.revealX(x);

    return 0;

}