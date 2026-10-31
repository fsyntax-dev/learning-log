#include <iostream>

class Num{
private:
    int m_x{};
public:
    Num(int x) : m_x{x} {}

    void setX(int x) {m_x = x;}
    int getX() const {return m_x;}

    int checkX(int y){
        return (m_x > y ? m_x : y);
}
};

Num checkNum(const Num& x, const Num& y){
    return (x.getX() > y.getX() ? x : y);
}

int main(){

    Num valueA(5);
    Num valueB(7);

    
    std::cout << checkNum(valueA, valueB).getX() << "\n";
    std::cout << valueA.checkX(7) << "\n";




    return 0;
}