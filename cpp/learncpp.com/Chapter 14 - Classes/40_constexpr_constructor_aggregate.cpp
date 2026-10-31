#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};

public:
    int getX() const {return m_x;}
    int getY() const {return m_y;}

    constexpr Num (int x, int y) : m_x{x}, m_y{y} {}

};

void checkNum(Num value){
     std::cout << (value.getX() > value.getY() ? value.getX() : value.getY() ) << "\n";
}


int main(){

    constexpr Num valueA{5,10};     // compile-time

    checkNum(valueA);               // run-time


    return 0;
}