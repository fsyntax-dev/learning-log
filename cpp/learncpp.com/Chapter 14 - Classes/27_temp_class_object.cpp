#include <iostream>

class Num{
private:
    int m_NumX{};
    int m_NumY{};

public:
    // constructor for aggregate init
    Num(int x, int y) : m_NumX(x), m_NumY(y){}  

    // getter
    int getX() { return m_NumX; }
    int getY() { return m_NumY; }

};

void print(Num value){
    std::cout << (value.getX() > value.getY() ? value.getX() : value.getY()) << "\n";
}

int main(){

    Num valueA{10,20};      // create variable store object Num
    print (valueA);         // only used once

    print(Num {10, 20});    // temporary object

    return 0;
}