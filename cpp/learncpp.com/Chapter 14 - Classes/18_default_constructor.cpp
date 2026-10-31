#include <iostream>

class Num{
private:
    int m_x{};
    int m_y{};
public:
    void setX(int x){m_x = x;}
    void setY(int y){m_y = y;}

    int getX() const {return m_x;}
    int getY() const {return m_y;}

    Num() = default;
    Num(int x, int y) : m_x{x}, m_y{y} {
    }
};

void print(Num value){
    std::cout << (value.getX() > value.getY() ?value.getX() : value.getY()) << "\n";
}

int main(){

    Num valueA{};   // empty object

    valueA.setX(5);
    valueA.setY(10);

    print(valueA);

    return 0;
}