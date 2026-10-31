#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
public:
    void setX(int x) {m_x = x;}
    void setY(int y) {m_y = y;}

    int getX() {return m_x;}
    int getY() {return m_y;}

    Num() = default;
    Num(int x, int y) : m_x{x}, m_y{y} {}
};

void print(Num value){
    std::cout << (value.getX() > value.getY() ? value.getX() : value.getY() ) << "\n";
}

int main(){

    const Num valueA{5, 10};    // const object member

    valueA.setX(20);            // can't change

    return 0;
}